// Binary Expression Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "BinaryTree.h"

template <typename T>
void BinaryTree<T>::insert(T value)
{
	BTNode<T>* newNode = new BTNode<T>(value);

	if (root == nulptr)
	{
		root == newNode;
		return
	}
	else
	{
		tempq.push(root);

	}
}