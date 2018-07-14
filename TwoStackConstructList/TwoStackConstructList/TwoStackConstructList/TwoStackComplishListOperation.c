/****
* @Version :V1.1
* @Brief: The  file of list operation
* @Author: Chendonghao
****/

/***Include************************/
#include"TwoStacksComplishListOperation.h"
#include<stdlib.h>

/***Extern Variables***************************/
extern  pNode head2;
extern  pNode head1;

/***
* @ Brief: Init list 
* @ Params: None
* @ ReturnVal: None
***/
void Init_List()
{
	Init_Stack1();
	Init_Stack2();
}

/***
* @ Brief: Push node to list
* @ Params: NodeValue:the value of new node
* @ ReturnVal: None
***/
void Push_List(type NodeValue)
{
	Push_Stack1(NodeValue);
}

/***
* @ Brief: Pop node from list
* @ Params: None
* @ ReturnVal: the value of node have been poped
***/
type Pop_List(void)
{
	if (head2 == NULL)
	{
		while (head1 != NULL)
		{
			Push_Stack2(Pop_Stack1());
		}
	}
	return Pop_Stack2();
}

/***
* @ Brief: free the list
* @ Params: Node
* @ ReturnVal: None
***/
void Free_List(void)
{
	Free_Stack1();
	Free_Stack2();
}

/************************END OF FILE****************************************/