/*******
* @ Version: V1.1
* @ Brief: The head file of stack operation 
* @ Author: CHENDONGHAO
******/

/***************ATTENTION*******************************
* When you use the operation of stack , you must use init function
* firstly. 
* if you want to change the data type of node , you can change the 
* define of type .
***************************************************************/

/*******************To Prevent repeat include head file************************/
#ifndef _STACK_H_
#define _STACK_H_

/***************Define the value type of node******************************/
#define type int

/*****************The definition of stack node******************************/
struct StackNode
{
	struct StackNode* Next;
	type value;
};

/******************Typedefine*****************************/
typedef struct StackNode* pNode;

/****************Function************************/
void Init_Stack1(void);
void Push_Stack1(type Value_Node);
type Pop_Stack1(void);
void Free_Stack1(void);
void Init_Stack2(void);
void Push_Stack2(type Value_Node);
type Pop_Stack2(void);
void Free_Stack2(void);



#endif

/******************END OF FILE ****************************/
