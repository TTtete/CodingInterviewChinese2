/***********This define to prevent reinclude*******************/
#ifndef _TEST_H_
#define _TEST_H_

/*************Include*****************/
#include"CountFibonacci.h"

/*******Struct define**********/
struct Test
{
	void(*test1)(void);
	void(*test2)(void);
	void(*test3)(void);

};

void(*ptest(void))(void);
void test1(void);//输入正常的正整数
void test2(void);//输入正小数
void test3(void);//输入0


#endif

/****************END OF FILE***********************/

