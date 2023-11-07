// AStar algorithm
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <time.h>
#include <windows.h>

// * AStar(A*) 알고리즘
//- 플레이어가 도착지점으로 이동한다.
//- 이때 장애물을 피해가는 최단경로를 찾아 이동한다.
//- 최단경로를 탐색하는 알고리즘

// * 공식
//- Openlist, Closedlist, Parent와 F = G + H라는 공식을 이용
//- Openlist는 경로를 탐색하면서 고려대상이 포한되는 노드
//- Closedlist는 Openlist 중에서 목정지까지 가장 짧은 거리를  가진 노드
//- Parent는 현재노드의 바로 직전노드, 이걸 통해서 경로를 이어줄 수 있다.
//- G : 시작노드에서 특정 노드까지의 이동거리
//- H : 특정노드에서 목적노드까지의 이동거리
//- F : G + H

// * 구현방식
//1. 맵생성(Path, Wall)
//2. 시작지점(start)와 목표지점(dest)를 설정
//3. start를 Openlist에 push_back(뒤에다 추가) 한다.
//4. OpenList가 0이 되거나 가장 비용이 작은 노드가 dest가 될때 까지 다음을 반복한다.
//4-1. Openlist에서 가장 비용이 F같이 작은 노드를 검색(최초start)
//4-2. 현재 노드를 Closedlist에 push_back하고 Openlist에 erase한다.(이 노드는 탐색하지 않는다)
//4-3. Closedlist의 상하좌우 4방향을 탐색하고 Openlist에 추가(벽이라면 제외)
//4-4. Closedlist에 있다면 제외(이미 2에서체크함)
using namespace std;

static HANDLE g_hConsole;
// 커서 위치 이동
void GotoXY(int x = 0, int y = 0) {
	COORD coord{ x,y }; // COORD 구조체 생성
	g_hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 화면 출력 핸들러
	SetConsoleCursorPosition(g_hConsole, coord); // x, y로 커서 이동
}

typedef pair<int, int> Pair; // (int, int)인 pair 구조체 Pair 선언
typedef pair<double, pair<int, int> > pPair; // (double, (int, int))인 pair구조체 pPair 선언

// int형 변수 2개와 float형 변수 3개를 멤버로 가지는 구조체 Cell 선언
struct Cell {
	int parentX, parentY;
	float  f, g, h;
};

// int형 상수 변수 선언
const int g_maxX = 18;
const int g_maxY = 18;
// (18, 18) 크기인 int형 2차원 배열 선언(맵 크기)
int grid[g_maxY][g_maxX];

// 'Path, Wall, Start, Dest' 열거자를 가진 열거형 Type 선언
enum Type {
	Path, //길
	Wall, //벽
	Start, //시작지점
	Dest //도착지
};

// ↖ ↑ ↗ ← → ↙ ↓ ↘ (index 순서에 따른 방향)
int dirX[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dirY[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };

void Draw(int curX, int curY); //그려주는 함수

int GetDistance(int x1, int y1, int x2, int y2) //거리계산
{
	// 좌표평면에서 점과 점 사이의 거리를 구할 때 사용하는 공식이다
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

//유효한지 여부
bool IsValid(int x, int y)
{
	// x가 0보다 작거나 y가 0보다 작거나 x가 g_maxX보다 크거나 같거나 y가 g_maxY보다 크거나 같으면
	if (x < 0 || y < 0 || x >= g_maxX || y >= g_maxY)
		return false; // false 반환 (맵 크기를 벗어남)
	return true; // true 반환 (맵 안에 있음)
}

//벽인지 여부
bool IsUnBlocked(int x, int y)
{
	// (x, y) 좌표가 Wall과 같다면
	if (grid[y][x] == Wall)
		return false; // false 반환 (벽)
	return true; // 아니면 true 반환 (벽 아님)
}

//도착지인지 여부
bool IsDestination(int x, int y, Pair dest)
{
	// x 값과 y값이 dest와 같다면
	if (x == dest.first && y == dest.second)
		return true; // true 반환 (도착)
	return false; // false 반환 (미도착)
}

// 시작위치에서부터 목적지까지의 경로를 추적한다.
void TracePath(Cell cellDetails[g_maxY][g_maxX], Pair dest)
{
	int x = dest.first;  // x에 목적지의 x를 대입
	int y = dest.second; // y에 목적지의 y를 대입

	stack<Pair> path; // 스택 선언

	// cellDetails[y][x].parentX와 x, cellDetails[y][x].parentY와 y 둘다 같지 않다면
	while (!(cellDetails[y][x].parentX == x && cellDetails[y][x].parentY == y))
	{
		path.push(make_pair(y, x)); // 스택에 pair(y,x) 추가

		int tempX = cellDetails[y][x].parentX; // temp에 parentX 임시저장
		int tempY = cellDetails[y][x].parentY; // temp에 parentY 임시저장
		x = tempX; // x에 tempX 대입
		y = tempY; // y에 tempY 대입
	}

	path.push(make_pair(y, x)); // 스택에 pair(y, x) 추가
	// path가 공백상태가 아니라면
	while (!path.empty()) {
		pair<int, int> p = path.top(); // 변수 p에 path의 최상단 값 대입
		path.pop(); // 최상단 데이터 제거
		cout << "->(" << p.first << "," << p.second << ")" << "\n"; // p(x,y) 값 출력
		Draw(p.second, p.first); // 해당 위치에 내 위치 표시
		Sleep(200); // 200ms 딜레이
		GotoXY(0, 0); // system("cls"); 대신 사용
		// system("cls");
	}
	cout << "\n";
}

void AStar(Pair start, Pair dest)
{
	if (false == IsValid(start.first, start.second)) // 시작지점을 유효성 검사를 해서 false가 나온다면
		return; // 종료
	if (false == IsValid(dest.first, dest.second)) // 도착지점을 유효성 검사를 해서 false가 나온다면
		return; // 종료

	if (false == IsUnBlocked(start.first, start.second) ||
		false == IsUnBlocked(dest.first, dest.second)) // 시작지점이나 도착지점이 벽이라면
		return; // 종료

	if (IsDestination(start.first, start.second, dest)) // 시작지점이랑 도착지점이 같다면
		return; // 종료

	bool closedList[g_maxY][g_maxX]; // bool형 closedList 배열 선언
	memset(closedList, false, sizeof(closedList)); // 배열 크기만큼 false로 값 설정

	Cell cellDetails[g_maxY][g_maxX]; // cellDetails 구조체 선언

	// init cells
	for (int i = 0; i < g_maxY; ++i) {
		for (int j = 0; j < g_maxX; ++j) {
			// 구조체의 float 변수들을 float의 표현되는 최대값으로 설정
			cellDetails[i][j].f = (numeric_limits<float>::max)();
			cellDetails[i][j].g = (numeric_limits<float>::max)();
			cellDetails[i][j].h = (numeric_limits<float>::max)();
			// parentX와 parentY를 -1로 설정
			cellDetails[i][j].parentX = -1;
			cellDetails[i][j].parentY = -1;
		}
	}

	// 시작 노드를 초기화 한다.
	int yy = start.first, xx = start.second;
	cellDetails[yy][xx].f = 0.f;
	cellDetails[yy][xx].g = 0.f;
	cellDetails[yy][xx].h = 0.f;
	cellDetails[yy][xx].parentX = xx;
	cellDetails[yy][xx].parentY = yy;

	// 데이터형이 pPair인 set 컨테이너 openList 생성
	set<pPair> openList;

	// openList에 초기 데이터 삽입
	openList.insert(make_pair(0.f, make_pair(xx, yy)));

	// 목적지 발견 변수 false 설정
	bool foundDest = false;
	// openList가 비어있지 않다면
	while (!openList.empty()) {
		pPair p = *openList.begin(); // openList의 첫 데이터를 p에 대입

		openList.erase(openList.begin()); // 첫 데이터 삭제

		xx = p.second.first; // x
		yy = p.second.second;// y
		closedList[yy][xx] = true; // closedList[yy][xx]를 true로 변경

		// 8방향 이동
		for (int d = 0; d < 8; ++d) {
			int y = yy + dirY[d]; 
			int x = xx + dirX[d];
			// 맵을 벗어나면 다음으로 넘어감
			if (false == IsValid(x, y))
				continue;
			// 현재 좌표와 목적지가 같다면
			if (true == IsDestination(x, y, dest)) {
				cellDetails[y][x].parentX = xx; // parentX에 xx 대입
				cellDetails[y][x].parentY = yy; // parentY에 yy 대입
				cout << "목적지를 찾음\n"; // 문구 출력
				TracePath(cellDetails, dest); // 목적지까지 경로 표시
				foundDest = true; // founDest를 true로 변경
				return;// 종료
			}
			// closedList[y][x]가 false이고, y, x 좌표가 벽이라면
			else if (false == closedList[y][x] && true == IsUnBlocked(x, y)) {
				// 새로운 g, h, f를 생성
				float gNew = cellDetails[yy][xx].g + 1.0f; // g + 1.0f
				float hNew = GetDistance(x, y, dest.second, dest.first); // (y, x)좌표와 목적지 좌표 사이의 거리를 대입
				float fNew = gNew + hNew; // f = g + h;

				// cellDetails[y][x].f 가 float의 표현되는 최대값이거나 fNew보다 크다면
				if (cellDetails[y][x].f == (numeric_limits<float>::max)() ||
					cellDetails[y][x].f > fNew) {
					openList.insert(make_pair(fNew, make_pair(x, y))); // openList에 pair 삽입

					cellDetails[y][x].f = fNew; // 구조체 f멤버에 fNew 대입
					cellDetails[y][x].g = gNew; // 구조체 g멤버에 gNew 대입
					cellDetails[y][x].h = hNew; // 구조체 h멤버에 hNew 대입
					cellDetails[y][x].parentX = xx; // 구조체 parentX에 xx 대입
					cellDetails[y][x].parentY = yy; // 구조체 parentY에 yy 대입
				}
			}
		}
	}
	// foundDest가 false라면 문구 출력
	if (false == foundDest)
		cout << "목적지를 찾는데 실패했습니다.\n";
}

// 맵 그리기
void Draw(int curX, int curY) {
	for (int i = 0; i < g_maxY; ++i) {
		for (int j = 0; j < g_maxX; ++j) {
			if (curX == j && curY == i) { // 커서 위치에 별 표시
				cout << "★";
			}
			else if (grid[i][j] == Path) { // (i,j)가 길이면 빈 네모 표시
				cout << "□";
			}
			else if (grid[i][j] == Wall) { // (i,j)가 벽이면 빈 네모 표시
				cout << "■";
			}
			else if (grid[i][j] == Start) {// (i,j)가 시작지이면 빈 네모 표시
				cout << "⊙";
			}
			else if (grid[i][j] == Dest) { // (i,j)가 도착지이면 빈 네모 표시
				cout << "○";
			}

		}
		cout << "\n"; // 한줄 씩 그려지고 줄바꿈
	}
}

int main() {
	cin.tie(nullptr); // 다른 입출력이 올때 기존의 입출력을 비워준다.
	ios::sync_with_stdio(false); // c언어 표준 입출력과 동기화를 풀어준다

	srand((unsigned int)time(nullptr)); // 난수 초기화

	Pair start; // Pair 구조체 start 선언
	Pair dest; // Pair 구조체 dest 선언
	// 시작지점 설정
	start.first = 0; // x
	start.second = 0;// y
	// 목적지 설정
	dest.first = g_maxX - 2;
	dest.second = g_maxY - 4;

	// y축 그리드, x축 그리드에 길과 벽 생성
	for (int i = 0; i < g_maxY; ++i) {
		for (int j = 0; j < g_maxX; ++j) {
			if (i == start.second && j == start.first ||
				i == dest.second && j == dest.first) { // 시작지와 도착지 제외
				continue;
			}
			grid[i][j] = rand() % 2; // (i, j)가 0(Path), 1(Wall) 중 랜덤으로 설정
		}
	}

	// [second][fisrt]인 이유는 (y,x)로 지정했을때 cmd창에서 (x,y)로 표시된다
	grid[start.second][start.first] = Start; // 시작지점 지정
	grid[dest.second][dest.first] = Dest; // 도착지점 지정

	AStar(start, dest);// 길찾기 시작

	return 0;
}
