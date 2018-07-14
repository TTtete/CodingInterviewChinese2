/**
*****************************************************************************************************************************
* @file   List.h
* @author CHENDONGHAO
* @version V1.0
* @date 14-May-2018
********************************************************************************************************************************
*/

/*Define to prevent recursive inclusion**************************************/
#ifndef _LIST_H_
#define _LIST_H_

/************private define**************************/
#define type int
/**********Exported variable****************/
struct List
{
	struct List* pNext;
	type value;
};

/* Exported functions******************************/
void Simple_List_Inite(struct List* head,type value);
void AddToTail(struct List* list,type value);
void PrintList(struct List* list);

#endif // !_LIST_H_

