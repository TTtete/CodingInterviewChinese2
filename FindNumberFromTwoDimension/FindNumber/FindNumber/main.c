#include<stdio.h>
#include"FindNum.h"

int main(void)
{
	int a[3][3] = {1,2,3,4,5,6,7,8,20};
	int i = findNum(a,1,9,6);
	printf("%d\n",i);
	return 0;
}