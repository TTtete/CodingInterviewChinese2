#include"Test.h"
#include"CountFibonacci.h"
#include<stdio.h>

//#define test1 printf("%d\n", FiboCount(8))

struct Test test = { test1,test2,test3 };

void test1(void)//����������������
{
	printf("%d\n", FiboCount(8));
}
void test2(void)//������С��
{
	printf("%d\n", FiboCount(8.6));
}
void test3(void)//����0
{
	printf("%d\n", FiboCount(0));
}

void(*ptest(void))(void)
{
	return test1;

}