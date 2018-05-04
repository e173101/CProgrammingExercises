/*
 * hanoi.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int layers)
{
	if (layers == 1) return 1;
	return 2 * f(layers -1) + 1;
}
int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("please give me a number\n");
		return EXIT_FAILURE;
	}
	int layers = strtol(argv[1], NULL, 10);
	if(layers < 0)
	{
		printf("please input a positive integer\n");
		return EXIT_FAILURE;
	}
	int steps = f(layers);
	printf("f(%d)=%d\n",layers,steps);
	return EXIT_SUCCESS;
}
