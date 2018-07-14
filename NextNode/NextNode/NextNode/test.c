#include"test.h"
#include"NewNode.h"
#include<stdio.h>


void test1()//有父节点有左子树和右子树
{
	type PreOrder[] = {5,10,20,40,45,25,60,65,15,30,50,55,35,70,75};
	type InOrder[] =  {40,20,45,10,60,25,65,5,50,30,55,15,70,35,75};
	struct TreeNode* tree = ConstructCore(PreOrder,InOrder,15);
	struct TreeNode* point_node = tree->pLeft->pLeft;
	type value = 0;
	value=NextNode(point_node);
	printf("%d\n",value);
}

void test2()//没有左右子树
{
	type PreOrder[] = { 5,10,20,40,45,25,60,65,15,30,50,55,35,70,75 };
	type InOrder[] = { 40,20,45,10,60,25,65,5,50,30,55,15,70,35,75 };
	struct TreeNode* tree = ConstructCore(PreOrder,InOrder,15);
	struct TreeNode* point_node = tree->pLeft->pLeft->pLeft;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test3()//没有父节点有左右子树
{
	type PreOrder[] = { 5,10,20,40,45,25,60,65,15,30,50,55,35,70,75 };
	type InOrder[] = { 40,20,45,10,60,25,65,5,50,30,55,15,70,35,75 };
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 15);
	struct TreeNode* point_node = tree;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test4()//只有一个节点的二叉树	
{
	type PreOrder[] = { 40};
	type InOrder[] = { 40};
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 1);
	struct TreeNode* point_node = tree;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test5()//在父节点的左子树，
{
	type PreOrder[] = { 5,10,20,40,45,25,60,65,15,30,50,55,35,70,75 };
	type InOrder[] = { 40,20,45,10,60,25,65,5,50,30,55,15,70,35,75 };
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 15);
	struct TreeNode* point_node = tree->pRight->pRight->pLeft;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test6()//在父节点的左子树，
{
	type PreOrder[] = {1};
	type InOrder[] = {2};
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 1);
	struct TreeNode* point_node = tree->pRight->pRight->pLeft;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test7()
{
	type PreOrder[] = { 5,10,20,40,45,25,60,65,15,30,50,55,35,70,75 };
	type InOrder[] = { 40,20,45,10,60,25,65,5,50,30,55,15,70,35,75 };
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 14);
	struct TreeNode* point_node = tree->pRight->pRight->pLeft;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

