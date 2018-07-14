/**********
* @ Version:V1.1
* @ Brief: 计算长度为N的第N个Fibonacci数列的值
* @ Author:CHENDONGHAO
*********************/
#include"CountFibonacci.h"

/***
* @ Brief:计算Fibonacci数列
* @ Param:n :Fibonacci数列长度。
* @ ReturnValue：第N个Fibonacci数列的值
******/
unsigned int FiboCount(unsigned int n)
{
	register unsigned int CountNum = 1;//记录计算到第多少相
	unsigned int result = 0;//计算结果
	unsigned int resultN_1 = 1, resultN_2=0;//resultN_1储存第N-1的值，resultN_2储存第N-2的值
	if (n == 0)
		result=0;
	if (n == 1)
		result=1;
	/*************非递归方式**********************/
	while(CountNum < n)
	{
		CountNum++;
		result = resultN_1 + resultN_2;
		resultN_2 = resultN_1;
		resultN_1 = result;
	}
	return result;

	/***********递归方式***************/


}

/**********************END OF FILE********************************/