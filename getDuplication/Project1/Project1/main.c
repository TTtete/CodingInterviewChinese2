#include<stdio.h>
#include"getDuplication.h"
int main(void)
{
	int i = 0, numbers[8] = { 1,1,3,5,5,7,6,4 };
	i = getDuplication(numbers, 9);
	printf("%d\n", i);
	return 0;

}