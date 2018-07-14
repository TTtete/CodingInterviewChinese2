/******************Includes*****************************/
#include"DrumpStep.h"

/******
* @ Brief:计算青蛙跳的方式种类，使用迭代的方式
* @ Params:台阶的个数
* @ Returnval:跳的方式的个数
*******/
unsigned int FrogDrump(unsigned int stepNum)
{
	if (stepNum == 0)
		return 0;
	if (stepNum == 1)
		return 1;
	if (stepNum == 2)
		return 2;   
	return FrogDrump(stepNum - 1) + FrogDrump(stepNum - 2);


}

/***********************END OF FILE**********************************************/