#include<stdio.h>
#include "getDuplication.h"

int main(void)
{
	int i = 0, numbers[9] = { 1,1,3,5,5,7,8,4,};
	i = getDuplication(numbers, 9);
	printf("%d\n", i);
	return 0;

}