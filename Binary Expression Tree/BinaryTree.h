#pragma once

#include <iostream>
#include <queue>
template <typename T>
class BTNode
{
public:
	BTNode(BTNode(data), BTNode* left = nullptr, BTNode* right = nullptr);
	BTNode* left;
	BTNode* right;
	T data;
	
	void BTNodeData(T value)
	{
		data = value;
	}

	BTNode(T value, BTNode* left = nullptr, BTNode* right = nullptr);
};

template <typename T>
class BinaryTree
{
public:
	BinaryTree():root(nullptr) {}

	bool isEmpty();

	void insert(T value);

	void remove(T value);

	bool search(T value);

	T getRoot()
	{
		return root->data();
	}

private:
	BTNode* root;
	queue<BTNode<T>*> tempq;
};
