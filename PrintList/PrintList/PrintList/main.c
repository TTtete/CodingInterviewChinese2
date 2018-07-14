#include<stdio.h>
#include"List.h"
#include"ListStack.h"
#include<stdlib.h>

int main(void)
{
	struct List* head=malloc(sizeof(struct List));
	Simple_List_Inite(head,5);
	AddToTail(head,2);
	AddToTail(head, 66);
	AddToTail(head, 77);
	PrintStack(head);
	return 0;
}