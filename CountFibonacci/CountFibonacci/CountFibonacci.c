/**********
* @ Version:V1.1
* @ Brief: ���㳤��ΪN�ĵ�N��Fibonacci���е�ֵ
* @ Author:CHENDONGHAO
*********************/
#include"CountFibonacci.h"

/***
* @ Brief:����Fibonacci����
* @ Param:n :Fibonacci���г��ȡ�
* @ ReturnValue����N��Fibonacci���е�ֵ
******/
unsigned int FiboCount(unsigned int n)
{
	register unsigned int CountNum = 1;//��¼���㵽�ڶ�����
	unsigned int result = 0;//������
	unsigned int resultN_1 = 1, resultN_2=0;//resultN_1�����N-1��ֵ��resultN_2�����N-2��ֵ
	if (n == 0)
		result=0;
	if (n == 1)
		result=1;
	/*************�ǵݹ鷽ʽ**********************/
	while(CountNum < n)
	{
		CountNum++;
		result = resultN_1 + resultN_2;
		resultN_2 = resultN_1;
		resultN_1 = result;
	}
	return result;

	/***********�ݹ鷽ʽ***************/


}

/**********************END OF FILE********************************/