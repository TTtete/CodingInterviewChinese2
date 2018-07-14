/****
* @Version :V1.1
* @Brief: The head file of list operation
* @Author: Chendonghao
****/
/************
* @Attention
* the file have to include the file¡ª¡ªStack.h
*******/
/************To Prevent repeat include head file*****************/
#ifndef _TWOSTACKSCOMPLISHLISTOPERATION_H_
#define _TWOSTACKSCOMPLISHLISTOPERATION_H_
/****Includes**********/
#include"Stack.h"
/****Functions************/
void Init_List(void);
void Push_List(type NodeValue);
type Pop_List(void);
void Free_List(void);

#endif // !_TWOSTACKCOMPLISHLISTOPERATION_H_
/********************************End of file******************************/

