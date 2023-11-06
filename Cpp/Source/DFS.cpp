// * 깊이 우선 탐색(DFS)
//- 현재 정점에서 갈 수 있는 점들을 들어가면서 탐색
//- 노드들을 깊게 탐색
//- 현재 경로상의 노드들만 기억하면 되므로 저장 공간 수요가 적음
//- 검색 속도는 BFS(넓이 우선 탐색)보다 느림

#include <vector>
using namespace std;

bool isVisit[9]; // 크기가 9인 bool형 배열 선언
vector<int> Graph[9]; // 크기가 9인 int형 vector 선언

void Dfs(int x)
{
    isVisit[x] = true; // x번 방문여부를 true로 설정
    printf("%d ", x); // x 출력
    for (int i = 0; i < Graph[x].size(); i++) // x번 인덱스 크기만큼 반복
    {
        int y = Graph[x][i]; // y에 (x, i) 데이터 대입
        if (!isVisit[y]) // 방문하지 않았다면
            Dfs(y); // 자기 자신을 다시 호출해 작업 수행
    }
}

int main(void)
{
    // 1번 인덱스에 2, 4, 5 추가
    Graph[1].push_back(2);
    Graph[1].push_back(4);
    Graph[1].push_back(5);

    // 2번 인덱스에 1, 7 추가
    Graph[2].push_back(1);
    Graph[2].push_back(7);

    // 3번 인덱스에 1, 4, 5 추가
    Graph[3].push_back(1);
    Graph[3].push_back(4);
    Graph[3].push_back(5);

    // 4번 인덱스에 3, 5 추가
    Graph[4].push_back(3);
    Graph[4].push_back(5);

    // 5번 인덱스에 3, 4 추가
    Graph[5].push_back(3);
    Graph[5].push_back(4);

    // 6번 인덱스에 7 추가
    Graph[6].push_back(7);

    // 7번 인덱스에 2, 6, 8 추가
    Graph[7].push_back(2);
    Graph[7].push_back(6);
    Graph[7].push_back(8);

    // 8번 인덱스에 1, 7 추가
    Graph[8].push_back(1);
    Graph[8].push_back(7);

    // 깊이 우선 탐색 실행
    Dfs(1); // 1. '1' 방문
            // 2. '2' 방문
            // 3. '7' 방문
            // 4. '6' 방문
            // 5. '8' 방문
            // 6. '4' 방문
            // 7. '3' 방문
            // 8. '5' 방문
}
