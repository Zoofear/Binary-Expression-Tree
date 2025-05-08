#include "PostfixEvalTree.h"

node* PostfixEval::createPostfixTree( std::istringstream& ss)
{
	if (!ss)
	{
		std::cout << "AHHHHHHHHHHHHHHHHHHHH ";
		return nullptr;
	}
	if (ss >> token)
	{
		if (std::isdigit(token[0]) || (token[0] == '-' || token[0] == '.') && token.length() > 1)
		{
			return new node(token);

			std::cout << token << " ";
		}
		else if (token == "^" || token == "+" || token == "-" || token == "*" || token == "/")
		{
			node* rightst = createPostfixTree(ss);
			node* leftst = createPostfixTree(ss);
			root = new node(token);
			root->right = rightst;
			root->left = leftst;
			return root;
			std::cout << token << " ";
		}
	}
	return nullptr;
}