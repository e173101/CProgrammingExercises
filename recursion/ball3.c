/*
 * ball3.c
 * blud & red & green
 * can't take two red or blue balls in a row.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int r(int ball);
int b(int ball);
int g(int ball);
int f(int ball);

int r(int ball)
{
	if(ball==2) return 2;
	if(ball==1) return 1;
	return g(ball-1)+b(ball-1);
}

int b(int ball)
{
	if(ball==2) return 2;
	if(ball==1) return 1;
	return g(ball-1)+r(ball-1);
}

int g(int ball)
{
	return f(ball-1);
}


int f(int ball)
{
	if(ball==2)return 7;//g :f(1) + b or r:2*2 
	if(ball==1)return 3;//b or r or g
	return g(ball) + r(ball) + b(ball);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("please give me a number");
		return EXIT_FAILURE;
	}
	int balls = strtol(argv[1], NULL, 10);
	int ways = f(balls);
	printf("f(%d)=%d\n",balls,ways);
	return EXIT_SUCCESS;
}
