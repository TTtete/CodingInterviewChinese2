/******************Includes*****************************/
#include"DrumpStep.h"

/******
* @ Brief:�����������ķ�ʽ���࣬ʹ�õ����ķ�ʽ
* @ Params:̨�׵ĸ���
* @ Returnval:���ķ�ʽ�ĸ���
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