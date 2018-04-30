/*
 * mysort.c
 */
#include <stdio.h>
static void swap(int *a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void mysort(int * arr, int len)
{
	int ind1;
	int ind2;
	int minind;
	for(ind1 = 0; ind1 < len; ind1 ++)
	{
		minind = ind1;
		for (ind2 = ind1 +1; ind2 <len; ind2++)
			if (arr[minind] > arr[ind2])
				minind = ind2;
		if(minind != ind1)
			swap(&arr[minind], &arr[ind1]);
	}
}

