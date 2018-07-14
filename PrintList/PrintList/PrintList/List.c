/**
*****************************************************************************************************************************
* @file   List.c
* @author CHENDONGHAO
* @version V1.0
* @date 14-May-2018
********************************************************************************************************************************
*/

#include "List.h"
#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>


/**
 * @brief init the list 
 * @param 1、the list to be inited. 2、the value of the list's head.
 * @retval None
**/
void Simple_List_Inite(struct List* head,type value)
{
	head->pNext =NULL;
	head->value = value;
}

/**
* @brief add a node to the tail of list
* @param 1、the list to be added 2、value of the node 
* @retval None
**/
void AddToTail(struct ListNode* list,type value)
{
	struct List* find;
	struct List* Node=malloc(sizeof(struct List));
	Node->value = value;
	Node->pNext = NULL;
	if (list == (void*)0)
		list = Node;
	else
	{
		find = list;
		while (find->pNext != NULL)
			find = find->pNext;
		if (find->pNext == NULL)
			find->pNext = Node;
	}
}
/**
 * @brief Print List
 * @param List
 * @retval None
**/

void PrintList(struct List* list)
{
	if (list == (void*)0)
	{
		printf("the list is NULL pointer!!!\n");
		return;
	}
	struct List* midnode;
	midnode = list;
	while (midnode != NULL)
	{
		printf("%d\n", midnode->value);
		midnode = midnode->pNext;
	}
}

/***********************************COPYRIGHT 2018 CHENDONGHAO*********************END OF FILE************************************************/