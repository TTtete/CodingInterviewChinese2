/**
******************************************************************************************
* @ Author CHENDONGHAO
* @ Version V1.0
* @ Brief To test the BinaryTree
*****************************************************************************************
**/

/****Private Include**************************************/
#include"test.h"
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>

void test1()//the preorder and inorder arry is empty
{
	type* preorder=NULL;
	type* inorder=NULL;
	struct	BinaryTreeNode* tree;
	tree = ConstructCore(preorder, inorder, 8);
	while (tree->m_pRight != NULL)
	{
		printf("%d\n", tree->value);
		tree = tree->m_pRight;

	}
}
void test2()//the left tree
{
	type preorder[5] = {3,5,9,10,11};
	type inorder[5] = {11,10,9,5,3};
	struct	BinaryTreeNode* tree;
	tree = ConstructCore(preorder, inorder, 5);
	while (tree->m_pLeft != NULL)
	{
		printf("%d\n", tree->value);
		tree = tree->m_pLeft;

	}
}
void test3()//the right tree
{
	type preorder[5] = {3,5,9,10,11 };
	type inorder[5] = {3,5,9,10,11 };
	struct	BinaryTreeNode* tree;
	tree = ConstructCore(preorder, inorder, 5);
	while (tree->m_pRight != NULL)
	{
		printf("%d\n", tree->value);
		tree = tree->m_pRight;

	}
}

void test4()//the preorder and inorder is different tree
{
	type preorder[5] = { 3,5,9,10,11 };
	type inorder[5] = { 8,3,2,1,5 };
	struct	BinaryTreeNode* tree;
	tree = ConstructCore(preorder, inorder, 5);
	while (tree->m_pRight != NULL)
	{
		printf("%d\n", tree->value);
		tree = tree->m_pRight;

	}
}