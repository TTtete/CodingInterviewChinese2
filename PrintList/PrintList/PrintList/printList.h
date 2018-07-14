/**
*****************************************************************************************************************************
* @file   *****
* @author CHENDONGHAO
* @version V1.0
* @date 14-May-2018
********************************************************************************************************************************
*/
/*Define to prevent recursive inclusion**************************************/
#ifndef _PRINTLIST_H_
#define _PRINTLIST_H_
/****************private define*************************/
#define type int
/**************private variables*******************/
struct Listnode
{
	struct Listnode* pnode;
	int value;
};


void printList(struct Listnode* list);

#endif // !_PRINTLIST_H_

