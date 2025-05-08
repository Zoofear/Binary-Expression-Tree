#include "PostfixEvalTree.h"

void PostfixEval::createPostfixTree(node* root)
{
	if (!ss)
	{
		return;
	}
	if (std::isdigit(token[0]) || (token[0] == '-' || token[0] == '.') && token.length() > 1)
	{
		root->data = token;
		root->left = nullptr;
		root->right = nullptr;
	}
	else if (token == "^" || token == "+" || token == "-" || token == "*" || token == "/")
	{
		root->data = token;
		createPostfixTree(root->left);
		createPostfixTree(root->right);
	}
}