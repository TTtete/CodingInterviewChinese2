/**
*****************************************************************************************************************************
* @file   List.c
* @author CHENDONGHAO
* @version V1.0
* @date 14-May-2018
********************************************************************************************************************************
*/

/**Private Include*********************************************************/
#include"ListStack.h"
#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

/**private varaibles*****************************************/
struct StackNode* head;

/**Private Functions***************************************************************************************/

/**
* @brief init the stack.
* @param  the head of stack¡¢the value of head
* @return None
**/
void StackInit()
{
	head = NULL;
}

struct StackNode* NewNode(struct StackNode* next ,type value)
{
	struct StackNode* pNewNode = malloc(sizeof(struct StackNode));
	pNewNode->pFront = next;
	pNewNode->value = value;
	return pNewNode;
}

/**
* @brief push a node to the stack.
* @param  the head of stack¡¢the value of head
* @return None
**/
void PushStack(type value)
{
	head = NewNode(head,value);
}

/**
* @brief push a node to the stack.
* @param  the head of stack
* @return None
**/
type PopStack()
{
	type nodvalue = head->value;
	struct StackNode* pnod = head;
	head = head->pFront;
	free(pnod);
	return nodvalue;
}
/**
* @brief print the stack.
* @param  the head of stack
* @return None
**/
void PrintStack(struct List* list)
{
	if (list == (void*)0)
		return;
	//struct StackNode* stack=malloc(sizeof(struct StackNode));
	StackInit();
	struct List* ListStore;
	ListStore = list;
	while (ListStore->pNext != NULL)
	{
		PushStack(ListStore->value);
		ListStore = ListStore->pNext;
	}
	if (ListStore->pNext == NULL)
		PushStack(ListStore->value);
	while (head != NULL)
		printf("%d\n",PopStack(head));
}

/**
* @brief free the stack.
* @param  the head of stack
* @return None
**/
void FreeStack(struct StackNode* stack)
{
	if (stack == (void*)0)
		return;
	struct StackNode* midnode;
	while (stack->pFront !=NULL)
	{
		midnode = stack;
		stack = stack->pFront;
		free(midnode);
	}
	free(stack);
}
