#include"FindNum.h"


bool findNum(type* arry, int row, int column, type aim)
{
	if (arry == (void*)0||row<=0||column<=0)
		return false;
	int i = column-1;
	while (i<=row*column-1 && i>=0)
	{
		while (arry[i] > aim && i>0)
			i--;
		if (arry[i] == aim)
			return true;
		else
			while (arry[i] < aim && i<=row*column-1)
			i += column;


	}
	return false;
}