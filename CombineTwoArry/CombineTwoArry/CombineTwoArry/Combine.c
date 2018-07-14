/**********private include**********/
#include"Combine.h"

/****private define*****/
#define nullptr (type *)0

/*****
* @function:combine two orderly arry
* @parament  two arry address and two arrys' length
* @return  combined arry
*****/
bool combineArry(type* arry1, type* arry2,  int len1,  int len2)
{
	if (arry1 == nullptr || arry2 == nullptr)
		return false;
	int pt1 = len1 - 1,pt2=len2-1,tail=len1+len2-1;
	while (pt2 >= 0)
	{
		if (pt1 >= 0)
			if (arry2[pt2] >= arry1[pt1])
				arry1[tail--] = arry2[pt2--];
			else
				arry1[tail--] = arry1[pt1--];
		if (pt1 < 0)
			while (pt2 >= 0)
				arry1[pt2--] = arry2[pt2];
	}
	return true;
}