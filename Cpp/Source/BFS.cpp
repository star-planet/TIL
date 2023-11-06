// * 그래프 탐색
//- 하나의 정점으로 부터 시작하여 차례대로 모든 지점을 한번씩 방문하는 것

// * 너비 우선 탐색(BFS, Breadth-First Search)
//- 루트 노드에서 시작해서 인접한 노드를 먼저 탐색하는 방법
//- 시작 정점으로부터 가까운 지점을 먼저 방문하고 멀리 떨어진 지점을 나중에 순회
//- 깊게 탐색하기 전에 넓게 탐색
//- 두 노드 사이의 최단 경로 탐색 혹은 임의의 경로탐색시 사용
//- 큐 자료구조를 사용
//- 최단경로를 보장
//- 경로가 매우 긴 경우에는 많은 기억공간을 필요
//- 유한 그래프의 경우 목표지점이 존재하지 않는다면 모든 그래프를 탐색 후 실패를 반환
//- 무한 그래프의 경우 무한 루프에 빠진다.

#include <vector>
#include <queue>

using namespace std;

bool isVisit[9]; // 크기가 9인 bool형 배열 선언
vector<int> Graph[9]; // 크기가 9인 int형 vector 선언

// BFS 함수 정의
void Bfs(int start)
{
    queue<int> Queue; // int형 큐 선언
    Queue.push(start); // 큐에 start 데이터 추가
    isVisit[start] = true; // start의 방문여부를 true로 변경

    while (!Queue.empty()) // 큐가 공백상태가 아니라면
    {
        int x = Queue.front(); // x에 큐의 최전방 데이터(start) 삽입
        Queue.pop(); // start 제거
        printf("%d ", x); // x 출력
        for (int i = 0; i < Graph[x].size(); i++) // x번 인덱스 크기만큼 반복
        {
            int y = Graph[x][i]; // y에 (x, i) 인덱스 데이터 삽입
            if (!isVisit[y]) { // 방문하지 않았다면
                Queue.push(y); // 큐에 y 데이터 추가
                isVisit[y] = true; // y의 방문여부를 true로 변경
            }
        }
    }
}

int main(void) {
    // 1번 인덱스에 2, 3, 8 추가
    Graph[1].push_back(2);
    Graph[1].push_back(3);
    Graph[1].push_back(8);
    
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

    // 너비 우선 탐색 실행
    Bfs(1); // 1. '1' 방문
            // 2. '2, 3, 8' 방문
            // 3. '7' 방문
            // 4. '4, 5' 방문
            // 5. '6' 방문
            // 이후 중복 생략
    return 0;
}
