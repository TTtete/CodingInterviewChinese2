#include<stdio.h>
#include"Test.h"

extern struct Test test;
int main()
{
	test.test1();
	test.test2();
	test.test3();
	//void(*point)(void);
	//point = ptest();
	//ptest()();
	return 0;
}