// * 그래프
//- 요소들이 서로 복잡하게 연결되어 있는 관계를 표현하는 자료구조
//- 정점(Vertex)과 간선(Edge)들의 집합으로 구성
//- 수학적으로 그래프를 표시하는 방법 : G = (V, E) 
//- V(G)는 그래프 G의 정점들의 집합을, E(G)는 그래프, G는 간선들의 집합을 의미
//- 지하철 노선도, 도로, 길찾기 알고리즘 등 실생활의 다양한 분야에서 활용

// * 그래프 용어
//1. 정점(Vertex)
//- 노드(Node)라고도 부르며 데이터가 저장되는 그래프의 기본 원소
//2. 간선(Edge)
//- 링크(Link)라고도 부르며 정점 간의 관계를 나타냄
//3. 인접정점(Adjacent Vertex)
//- 하나의 정점에서 간선에 의해 직접 연결되어 있는 정점
//4. 차수(Degree)
//- 정점에 연결된 간선의 수
//- 방향그래프의 경우 외부에서 오는 간선의 수를 진입차수(In-Degree)
//- 외부로 향하는 간선의 수를 진출 차수(Out_Degree)
//5. 경로(Path)
//- 간선을 따라갈 수 있는 길을 의미
//- 정점을 나열하여 표시
//- 간선이 존재하지 않는 길은 경로가 될 수 없다.
//6. 경로의 길이(Length)
//- 경로를 구성하는데 사용된 간선의 수
//7. 단순 경로(Simple Path)
//- 경로 중에서 반복되는 간선이 없는 경로
//8. 사이클(Cycle) A->B->C->A
//- 시적 정점과 종료 정점이 같은 단순 경로

// * 그래프의 종류
//1. 무방향 그래프
//- 두 정점을 연결하는 간선에 방향이 없는 그래프이며 양방향 이동 가능
//2. 방향 그래프
//- 두 정점을 연결하는 간선에 방향이 존재하는 그래프이며, 간선의 방향으로만 이동 가능
//3. 가중치 그래프
//- 간선에 비용또는 가중치가 할당된 그래프이며 "네트워크"라고 불리기도 함
//4. 완전 그래프
//- 모든 정점간에 간선이 존재하는 그래프
//- 무방향 완전그래프의 정점의 수가 n이라면 전체 간선의 수는 n*(n-1)/2가 된다.

// * 오일러 경로
//- 그래프에 존재하는 모든 간선을 한번만 통과해서 처음 정점으로 돌아오는 경로
//- 그래프의 모든 정점에 연결된 간선의 갯수가 홀수일 때만 오일러 경로가 존재

// * 인접 행렬
//- 자료구조 그래프의 연결을 행렬로 표현한 것

#include <iostream>
using namespace std;

#define MAX_VTXS 256 // MAX_VTXS를 256으로 정의

class AdjMatGraph
{
private:
    int size;
    char vertices[MAX_VTXS]; // 크기가 256인 char형 배열 선언
    int adjMat[MAX_VTXS][MAX_VTXS]; // 크기가 256, 256인 int형 2차원 배열 선언

public:
    AdjMatGraph() {
        reset(); // class 생성 시 reset() 함수 실행
    }
    ~AdjMatGraph() {}

    char getVertex(int i) {
        return vertices[i]; // i번째 꼭짓점을 반환
    }
    int getEdge(int i, int j) {
        return adjMat[i][j]; //(i,j) 위치의 정점을 반환
    }
    void setEdge(int i, int j, int val) {
        adjMat[i][j] = val; // (i,j) 위치의 정점을 val로 설정
    }

    // 그래프를 0으로 초기화, size도 0으로 초기화
    void reset() {
        for (int i = 0; i < MAX_VTXS; i++) {
            for (int j = 0; j < MAX_VTXS; j++) {
                setEdge(i, j, 0);
            }
        }
        size = 0;
    }

    // 그래프가 포화상태라면 문구 출력 후 종료
    // 포화상태가 아니라면 name은 0번 꼭짓점, 1번 꼭짓점, … 순서로 대입된다.
    void insertVertex(char name) {
        if (isFull()) {
            cout << "Graph vertex full error" << endl;
            return;
        }

        vertices[size++] = name;
    }

    // (u, v)와 (v, u)위치의 정점을 1로 설정
    void insertEdge(int u, int v) {
        setEdge(u, v, 1);
        setEdge(v, u, 1);
    }

    // 그래프 출력
    void display() {
        cout << "vertex size : " << size << endl; // 꼭짓점 개수 출력
        cout << "    ";
        for (int i = 0; i < size; i++) { 
            cout << getVertex(i) << " "; // x축 꼭짓점 출력
        }
        cout << endl;

        for (int i = 0; i < size; i++) {
            cout << getVertex(i) << " : "; // y축 꼭짓점 출력 후
            for (int j = 0; j < size; j++) {
                cout << getEdge(i, j) << " "; // y축 정점 출력
            }
            cout << endl; // 다음 y축으로 넘어감
        }
    }

    // size가 0이면 true 반환
    bool isEmpty() {
        return size == 0;
    }

    // size가 MAX_VTXS 크거나 같으면 true 반환
    bool isFull() {
        return size >= MAX_VTXS;
    }
};

int main() {
    // class 선언
    AdjMatGraph graph;

    graph.insertVertex('A'); // 꼭짓점 A 추가
    graph.insertVertex('B'); // 꼭짓점 B 추가
    graph.insertVertex('C'); // 꼭짓점 C 추가
    graph.insertVertex('D'); // 꼭짓점 D 추가

    graph.insertEdge(0, 1); // (0, 1), (1, 0) 에 정점 1 추가
    graph.insertEdge(0, 2); // (0, 2), (2, 0) 에 정점 1 추가
    graph.insertEdge(0, 3); // (0, 3), (3, 0) 에 정점 1 추가
    graph.insertEdge(2, 3); // (2, 3), (3, 2) 에 정점 1 추가

    graph.display(); // 현재 그래프 상태 출력

    return 0;
}


