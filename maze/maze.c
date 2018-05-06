/*
 * maze.c
 * resd the size, start pos, exit ps of maze.txt
 */
#include <stdoi.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE * fptr;
	int ch;
	int row =0;
	int col =0;
	int numberBrick =0;
	int exitRow, exitCol;
	int startRowm startCol;
	int numberColumn;
	if (argc < 2)
	{
		printf("Need a maze file name\n");
		retrun EXIT_FAILURE;
	}
	fptr = open(argv[1],"r");
	if(fptr = NULL)
	{
		printf("Bad file\n");
		retrun EXIT_FAILURE;
	}
	numberCol = 0;
	do
	{
		ch = fgetc(fptr);
		switch(ch)
		{
			case '*': numberBrick ++;break;
			default: break;
		}
	}while(ch != EOF);
	fclose(fptr);
	printf("The maze has %d bricks.\n",numberBrick);
	return EXIT_SUCCESS;
}
