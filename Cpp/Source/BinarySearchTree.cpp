// * 이진 탐색 트리
//- 좌측 하위 트리의 노드들은 상위 노드보다 작거나 같은 값
//- 우측 하위 트리들은 상위노드보다 큰 값
//- 좌측 및 우측 하위트리 역시 이진 탐색 트리

// * 탐색
//- 탐색 시작은 루트노드에서 시작
//- 탐색하려는 값이 루트 노드의 값이라면 루트노드의 값 반환
//- 탐색하려는 값이 루트 노드보다 작다면 좌측 하위트리 이동 후 탐색 반복
//- 탐색하려는 값이 루트 노드보다 크다면 우흑 하위트리로 이동 후 탐색 반복

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
node* CreateNode(int _data)
{
	node* Node = new node; // Node 포인터에 노드 저장

	Node->data = _data; // Node의 data에 _data 저장
	Node->left = nullptr; // left 필드를 nullptr로 초기화
	Node->right = nullptr; // right 필드를 nullptr로 초기화

	return Node; // Node 반환
}

node* MinNode(node* Node)
{
	node* minNode = Node; // minNode 에 Node 대입
	while (minNode->left != nullptr) // minNode의 left 필드가 nullptr이 아니면
	{
		minNode = minNode->left; // minNode에 minNode의 left 필드 값 대입
	}
	return minNode; // minNode를 반환
}

node* DeleteNode(node* root, int key)
{
	if (root == nullptr) // root가 nullptr이면
	{
		return root; // root를 반환
	}

	if (key < root->data) // root의 data가 key보다 크면
	{
		root->left = DeleteNode(root->left, key); // key값을 찾을때까지 좌측 하위 필드로 이동
	}
	else if (key > root->data) // root의 data가 key보다 작면
	{
		root->right = DeleteNode(root->right, key); // key값을 찾을때까지 우측 하위 필드로 이동
	}
	else // 찾았다면
	{
		if (root->left == nullptr) // root의 left 필드가 nullptr이면
		{
			node* temp = root->right; // temp에 right 필드 저장
			delete root; // 할당된 root 해제
			return temp; // temp를 반환
		}
		else if (root->right == nullptr) // root의 right 필드가 nullptr이면
		{
			node* temp = root->left; // temp에 left 필드 저장
			delete root; // 할당된 root 해제
			return temp; // temp를 반환
		}

		// temp에 MinNode를 실행시킨 값 대입
		// root->right->left값이 nullptr이 아니면 temp는 root->right->left
		// root->right->left값이 nullptr이면 temp는 root->right
		node* temp = MinNode(root->right);
		root->data = temp->data; // temp의 data를 root의 data에 대입
		root->right = DeleteNode(root->right, temp->data); // temp의 data값을 찾을때까지 우측 하위 필드로 이동
	}
	return root; // root를 반환
}


node* Search(node* root, int key)
{
	if (root == nullptr || root->data == key) // 만약 root가 nullptr이고 root의 data가 key이면
	{
		return root; // root를 반환
	}
	if (root->data < key) // root의 data가 key보다 작으면
	{
		return Search(root->right, key); // key값을 찾을때까지 우측 하위 필드로 이동
	}
	if (root->data > key) // root의 data가 key보다 크면
	{
		return Search(root->left, key); // key값을 찾을때까지 좌측 하위 필드로 이동
	}
}



int main()
{

	return 0;
}
