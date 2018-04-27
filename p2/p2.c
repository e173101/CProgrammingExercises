/*p1.c*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
	int a = sizeof(int);
	int b = sizeof(char);
	int c = sizeof(double);
	printf("main: a = %d, b = %d, c = %d\n", a, b, c);
	return EXIT_SUCCESS;
}

