#include<stdio.h>

int main(void)
{
	int arry1[10] = { 0,1,2,3,4 }, arry2[2] = { 0,4 };
	if (combineArry(arry1, arry2, 5, 2))
	{
		for (int i = 0; i < 7; i++)
			printf("%d\n", arry1[i]);
	}
	else
		printf("erro!!!");
	return 0;
}