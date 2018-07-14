/**
************************************************************************
* @ Author CHENDONGHAO
* @ Version V1.0
* @ Brief Find Next node of Mid
********************************************************************************
**/

/**Private Include******************************************************************/
#include"NewNode.h"
#include<stdio.h>
#include<stdlib.h>


type NextNode(struct TreeNode* node)
{
	if (node == NULL)
	{
		printf("Input error");
		exit(-1);
	}
		if (node->pRight == NULL)
		{
			if (node->pFather == NULL)
			{
				printf("No Next Node\n");
				exit(-1);
				return;
			}
			return node->pFather->value;
		}
		return ExitRightTree(node->pRight);

}

	type ExitRightTree(struct TreeNode* node)
	{
		if (node->pLeft == NULL)
			return node->value;
		else
			ExitRightTree(node->pLeft);
	}