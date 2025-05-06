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
	node(std::string x)
	{
		data = x;
	}
};

class PostfixEval
{
public:
	void createTree()
	{
		node* root = new node(nullptr);
	}
	
private:

	std::string start;
	double output;
	std::string token;
	std::stack<std::string> temp;

};