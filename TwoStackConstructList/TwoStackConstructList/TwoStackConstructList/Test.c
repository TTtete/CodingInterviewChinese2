#include"test.h"
#include"Stack.h"
#include"TwoStacksComplishListOperation.h"
#include<stdio.h>

void test1()//正常功能，连续压入队列几个数，连续弹出几个数
{
	Init_List();
	Push_List(1);
	Push_List(12);
	Push_List(123);
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	Free_List();
}
void test2()//先压入3个数，再弹出2个数，再压入2个数，再弹出3个数
{
	Init_List();
	Push_List(1);
	Push_List(12);
	Push_List(123);
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	Push_List(1234);
	Push_List(12345);
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	Free_List();
}
void test3()//压入3个数，弹出4个数
{
	Push_List(1);
	Push_List(12);
	Push_List(123);
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	Free_List();
}
void test4()//压入2个数，弹出1个数，再压入1个数，弹出3个数
{
	Push_List(1);
	Push_List(12);
	printf("%d\n", Pop_List());
	Push_List(123);
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	printf("%d\n", Pop_List());
	Free_List();
}