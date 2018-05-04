/*
 * partition1.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printPartition(int *arr, int length)
{
	int ind;
	for(ind = 0; ind <length -1;ind ++)
	{
		printf("%d + ", arr[ind]);
	}
	printf("%d\n", arr[length -1]);
}


void partition(int *arr, int ind, int left)
{
	if(left == 0)
	{
		printPartition(arr,ind);
		return; //nothing
	}
	for (int i=1; i<=left; i++)
	{
		arr[ind]=i;
		partition(arr,ind+1,left-i);
	}
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("please give me a number\n");
		return EXIT_FAILURE;
	}
	int n = strtol(argv[1], NULL, 10);
	if(n < 0)
	{
		printf("please input a positive integer\n");
		return EXIT_FAILURE;
	}
	int *arr;
	arr = malloc(sizeof(int)*n);
	partition(arr,0,n);
	free (arr);
       	EXIT_SUCCESS;

}
