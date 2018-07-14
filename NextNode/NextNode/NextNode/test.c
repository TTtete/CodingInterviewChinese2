#include"test.h"
#include"NewNode.h"
#include<stdio.h>


void test1()//�и��ڵ�����������������
{
	type PreOrder[] = {5,10,20,40,45,25,60,65,15,30,50,55,35,70,75};
	type InOrder[] =  {40,20,45,10,60,25,65,5,50,30,55,15,70,35,75};
	struct TreeNode* tree = ConstructCore(PreOrder,InOrder,15);
	struct TreeNode* point_node = tree->pLeft->pLeft;
	type value = 0;
	value=NextNode(point_node);
	printf("%d\n",value);
}

void test2()//û����������
{
	type PreOrder[] = { 5,10,20,40,45,25,60,65,15,30,50,55,35,70,75 };
	type InOrder[] = { 40,20,45,10,60,25,65,5,50,30,55,15,70,35,75 };
	struct TreeNode* tree = ConstructCore(PreOrder,InOrder,15);
	struct TreeNode* point_node = tree->pLeft->pLeft->pLeft;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test3()//û�и��ڵ�����������
{
	type PreOrder[] = { 5,10,20,40,45,25,60,65,15,30,50,55,35,70,75 };
	type InOrder[] = { 40,20,45,10,60,25,65,5,50,30,55,15,70,35,75 };
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 15);
	struct TreeNode* point_node = tree;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test4()//ֻ��һ���ڵ�Ķ�����	
{
	type PreOrder[] = { 40};
	type InOrder[] = { 40};
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 1);
	struct TreeNode* point_node = tree;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test5()//�ڸ��ڵ����������
{
	type PreOrder[] = { 5,10,20,40,45,25,60,65,15,30,50,55,35,70,75 };
	type InOrder[] = { 40,20,45,10,60,25,65,5,50,30,55,15,70,35,75 };
	struct TreeNode* tree = ConstructCore(PreOrder, InOrder, 15);
	struct TreeNode* point_node = tree->pRight->pRight->pLeft;
	type value = 0;
	value = NextNode(point_node);
	printf("%d\n", value);
}

void test6()//�ڸ��ڵ����������
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

