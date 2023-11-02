// * 트리
//- 비선형 자료구조(그래프, 트리)
//- 계층적 자료구조이며 계층형성 정보 저장을 위해 사용
//- 이진 탐색 트리와 같이 정렬되어 있는 트리는 적당한 접근 및 탐색을 제공
//- 정보 검색을 쉽게 만들어줌

// * 용어
//- Node : 트리 구조의 요소(Element)
//- 루트 노드 : 최상위 노드
//- 부모 노드 : 현재 노드 바로 위에 노드
//- 자식 노드 : 현재 노드 바로 아래 노드
//- 잎(Leaf) 노드 : 자식노드가 없는 노드

#include <iostream>

// 노드 선언
class node
{
public:
	int data; // 데이터를 담는 변수
	node* left; // 왼쪽 자식 노드
	node* right; // 오른쪽 자식 노드
};

// 노드 생성
node* CreateNode(int data)
{
	node* Node = new node; // Node 포인터에 노드 저장

	Node->data = data; // Node의 data에 data 저장
	Node->left = nullptr; // left 필드를 nullptr로 초기화
	Node->right = nullptr; // right 필드를 nullptr로 초기화

	return Node; // Node 반환
}


int main()
{
	node* root = CreateNode(1); // 부모 노드 생성
	root->left = CreateNode(2); // 왼쪽 자식 노드 생성
	root->right = CreateNode(3); // 오른쪽 자식 노드 생성
	root->left->right = CreateNode(5); // 왼쪽 자식의 오른쪽 자식 노드 생성


	/*
	      *생성된 트리*
		    1
		   / \
		  2   3
		   \
		    5
	*/

	return 0;
}
