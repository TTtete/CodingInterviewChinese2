/**
*****************************************************************************************************************************
* @file   List.c
* @author CHENDONGHAO
* @version V1.0
* @date 14-May-2018
********************************************************************************************************************************
*/
/**Define prevent recursive inclusion************************************************/
#ifndef _LISTSTACK_H_
#define _LISTSTACK_H_

/**Export Include****************************************************************************************/
#include"List.h"

/**private define**************************************************************/
#define type int

/**Export Variables************************************************************************/
struct StackNode
{
	struct StackNode* pFront;
	type value;
};

/**Export Function *********************************************************************************************/
void StackInit();
void PushStack(type value);
type PopStack();
void PrintStack(struct List* list);
void FreeStack(struct StackNode* stack);

#endif
