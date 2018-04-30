/*
 * main.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mysort.h"
int main(int argc, char** argv)
{
	if (argc != 2)
	{
		printf("no nono \n");
		return EXIT_FAILURE;
	}
	int number = strtol(argv[1], NULL, 10);
	int ind;
	int *arr;
	arr = malloc(sizeof(int) * number);
	for (ind = 0; ind < number; ind ++)
	{
		//int val;
		scanf("%d", &arr[ind]);
		//printf("%d\n", val);
	}
	mysort(arr, number);
	for (ind = 0; ind < number; ind ++)
	{
		//int val;
		printf("%d\n", arr[ind]);
	}



	return EXIT_SUCCESS;
}

