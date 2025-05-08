#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>

struct node
{
	std::string data;
	node* left = nullptr;
	node* right = nullptr;
	node(std::string x) :data(x) {}
	
};
//node struct for the binary tree

class PostfixEval
{
public:

	PostfixEval(const std::string& input) :root(nullptr), start(input) {} //constructor that initializes the tree by setting a root node to nullptr
	


	void createPostfixTree()					//Function overload
	{
		std::cout << "hello\n";

		std::istringstream ss(start);

		while (ss >> token)
		{
			std::cout << token;
		}
		
		createPostfixTree(ss);
		
		/*if (isTreeEmpty() == true)
		{
			std::cout << "Your tree is not empty, please delete it\n";
			return nullptr;
		}
		else if (isTreeEmpty() == false)
		{
			createPostfixTree(ss);
		}*/

		return;
	}

	void deleteTree();			//Deletes the tree and sets the root back to nullptr

	bool isTreeEmpty()			//Returns true if tree is full, false if it is empty
	{
		if (root->left == nullptr && root->right == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	void infixTraversal()
	{
		infixTraversal(root);
	}
	
	void postFixTraversal();	//returns an expression in postfix form by traversing through the tree in post order.

	double evaluate(std::string x, double left, double right);	//Used to evaluate the operands and operator and return it as a value

	void postFixExpressionEval();	// Goes through the tree in post order traversal in order to choose the operands and operators to evaluate.


private:
	
	node* createPostfixTree(std::istringstream& ss);		//Creates a binary expression tree based off of the postfix expression stored in the string start.;	//Function Overload

	void infixTraversal(const node* root); //returns a expression in infix form by traversing through the tree in order

	int stringstreamiterator = 0;
	std::string start;
	double output;
	std::string token;
	std::stack<std::string> tempstack;
	node* root;

};