/*
 * oneway.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int x, int y)
{
	if (x==0 || y==0) return 1;
	return f(x-1,y) + f(x,y-1);
}

int main(int argc, char *argv[])
{
	if(argc != 5)
	{
		printf("please give me 4 number: start x y and target x y");
		return EXIT_FAILURE;
	}
	int start_x = strtol(argv[1], NULL, 10);
	int start_y = strtol(argv[2], NULL, 10);
	int end_x = strtol(argv[3], NULL, 10);
	int end_y = strtol(argv[4], NULL, 10);

	int x = abs(start_x - end_x);
	int y = abs(start_y - end_y);

	int ways = f(x,y);

	printf("f(%d,%d)=%d\n",x,y,ways);
	return EXIT_SUCCESS;
}
