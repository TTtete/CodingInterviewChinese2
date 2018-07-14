/**
************************************************************************
* @ Author CHENDONGHAO
* @ Version V1.0
* @ Brief Struct the binary tree
********************************************************************************
**/

/**Private Include******************************************************************/
#include"BinaryTree.h"
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

/**
 * @ Brief Struct the binary tree 
 * @ Param PreOrder:   Preorder traversal sequence 
 * @ Param InOrder : Inorder traversal sequence
 * @ returnval :Root of Binary tree 
 **/
struct	BinaryTreeNode* ConstructCore(type* PreOrder, type* InOrder,int Length)
{
	if (PreOrder == NULL || InOrder == NULL || Length <= 0)
	{
		printf("Input Error 0\n");
		exit(-1);
	}
	struct	BinaryTreeNode* root = malloc(sizeof(struct BinaryTreeNode));
	type rootvalue = PreOrder[0];
	root->m_pLeft = root->m_pRight = NULL;
	root->value = rootvalue;
	int leftlength = 0;
	if (Length == 1 && PreOrder[0] != InOrder[0])
	{
		printf("Input error 1\n");
		exit(-1);
	}
	//if (PreOrder[0] == InOrder[0] || Length == 1)
	//	return root;
	while (rootvalue != InOrder[leftlength])
	{
		leftlength++;
		if (leftlength > Length)
		{
			printf("Input error 2\n");
			exit(-1);
		}
	}
	//if (Length == 1 )
	//{
	//	if ((PreOrder[1] != NULL || InOrder[1] != NULL))
	//	{
	//		printf("Input error 3\n");
	//		exit(-1);
	//	}
	//}
	if(leftlength>0)
		root->m_pLeft=ConstructCore(PreOrder+1,InOrder,leftlength);
	if((Length-leftlength-1)>0)
		root->m_pRight= ConstructCore(PreOrder+leftlength+1, InOrder+leftlength+1,Length-leftlength-1);
		return root;
}

/*******************************END OF FILE************************************************************************/