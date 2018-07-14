#include"getDuplication.h"

int getDuplication(const int* numbers, int length)
{
	if ((length < 1) || (numbers == 0))
		return -1;
	unsigned int start = 1, end = length - 1, middle = 1;
	while (end >= start)
	{
		middle = ((end - start) >> 1) + start;

		unsigned int count = countRange(numbers, length, start, middle);
		if (end == start)
		{
			if (count > 1)
				return start;
			else
				break;
		}
		if (count > (middle - start + 1))
			end = middle;
		else
			start = middle + 1;
	}
	return -1;
}

int countRange(const int* numbers, const int length, const int start, const int end)
{
	if (numbers == 0 || length < 1)
		return 0;
	int i = 0,count=0;
	for (; i < length; i++)
		if (numbers[i] >= start && numbers[i] <= end)
			count++;
	return count;

}