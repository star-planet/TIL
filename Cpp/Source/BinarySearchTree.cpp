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

class node
{
public:
	int data;
	node* left;
	node* right;
};

node* CreateNode(int _data)
{
	node* Node = new node;

	Node->data = _data;
	Node->left = nullptr;
	Node->right = nullptr;

	return Node;
}

node* MinNode(node* Node)
{
	node* minNode = Node;
	while (minNode->left != nullptr)
	{
		minNode = minNode->left;
	}
	return minNode;
}

node* DeleteNode(node* root, int key)
{
	if (root == nullptr)
	{
		return root;
	}

	if (key < root->data)
	{
		root->left = DeleteNode(root->left, key);
	}
	else if (key > root->data)
	{
		root->right = DeleteNode(root->right, key);
	}
	else
	{
		if (root->left == nullptr)
		{
			node* temp = root->right;
			delete root;
			return temp;
		}
		else if (root->right == nullptr)
		{
			node* temp = root->left;
			delete root;
			return temp;
		}


		node* temp = MinNode(root->right);
		root->data = temp->data;
		root->right = DeleteNode(root->right, temp->data);
	}
	return root;

}


node* Search(node* root, int key)
{
	if (root == nullptr || root->data == key)
	{
		return root;
	}
	if (root->data < key)
	{
		return Search(root->right, key);
	}
	if (root->data > key)
	{
		return Search(root->left, key);
	}
}



int main()
{


	return 0;
}
