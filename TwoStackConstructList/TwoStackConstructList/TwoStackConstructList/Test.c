#include"test.h"
#include"Stack.h"
#include"TwoStacksComplishListOperation.h"
#include<stdio.h>

void test1()//�������ܣ�����ѹ����м���������������������
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
void test2()//��ѹ��3�������ٵ���2��������ѹ��2�������ٵ���3����
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
void test3()//ѹ��3����������4����
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
void test4()//ѹ��2����������1��������ѹ��1����������3����
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