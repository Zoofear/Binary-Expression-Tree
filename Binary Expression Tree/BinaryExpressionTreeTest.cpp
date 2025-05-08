#include <iostream>
#include "PostfixEvalTree.h"

int main()
{
	std::string x = "3 7 + 14 * ";

	PostfixEval Test(x);

	Test.createPostfixTree();


};