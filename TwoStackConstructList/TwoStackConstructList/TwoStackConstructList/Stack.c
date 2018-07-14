/*******
* @ Version: V1.1
* @ Brief: The file of stack operation
* @ Author: CHENDONGHAO
******/
#include"Stack.h"
#include<stdlib.h>
#include<stdio.h>

 pNode head1;
 pNode head2;

void Init_Stack1()
{
	//phead1 = malloc(sizeof(pNode));
	head1 = NULL;
}
void Push_Stack1(type Value_Node)
{
	struct StackNode* NewNode = malloc(sizeof(struct StackNode));
	NewNode->value = Value_Node;
	NewNode->Next =head1;
	head1 = NewNode;
}
type Pop_Stack1(void)
{
	if (head1 == NULL)
	{
		printf("STACK1 IS EMPTY!!!\n");
		exit(-1);
	}
	type ReturnValue = 0;
	struct StackNode* StoreHead;//为了释放将要弹出的节点，作为中转存储变量
	ReturnValue = head1->value;
	StoreHead = head1;
	head1 = head1->Next;
	free(StoreHead);
	return ReturnValue;
}
void Free_Stack1(void)
{
	struct StackNode* StoreHead;//为了释放将要弹出的节点，作为中转存储变量
	while (head1 != NULL)
	{
		StoreHead = head1;
		head1 = head1->Next;
		free(StoreHead);
		
	}
}
void Init_Stack2(void) 
{
	head2 = malloc(sizeof(pNode));
	head2 = NULL;
}
void Push_Stack2(type Value_Node)
{
	struct StackNode* NewNode = malloc(sizeof(struct StackNode));
	NewNode->value = Value_Node;
	NewNode->Next = head2;
	head2 = NewNode;
}
type Pop_Stack2(void)
{
	if (head2 == NULL)
	{
		printf("STACK2 IS EMPTY!!!\n");
		exit(-1);
	}
	type ReturnValue = 0;
	struct StackNode* StoreHead;//为了释放将要弹出的节点，作为中转存储变量
	ReturnValue = (head2)->value;
	StoreHead = head2;
	head2 = head2->Next;
	free(StoreHead);
	return ReturnValue;
}
void Free_Stack2(void)
{
	struct StackNode* StoreHead;//为了释放将要弹出的节点，作为中转存储变量
	while (head2 != NULL)
	{
		StoreHead = head2;
		head2 = head2->Next;
		free(StoreHead);

	}
}



