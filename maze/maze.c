/*
 * maze.c
 * resd the size, start pos, exit ps of maze.txt
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE * fptr;
	int ch;
	int row =0;
	int col =0;
	int numberBrick =0;
	int exitRow, exitCol;
	int startRowm ,startCol;
	int numberCol, numberRow;
	if (argc < 2)
	{
		printf("Need a maze file name\n");
		return EXIT_FAILURE;
	}
	fptr = fopen(argv[1],"r");
	if(fptr == NULL)
	{
		printf("Bad file\n");
		return EXIT_FAILURE;
	}
	do
	{
		ch = fgetc(fptr);
		switch(ch)
		{
			case '*': numberBrick ++;break;
			default: break;
		}
		switch(ch)
		{
			default: col ++;break;
			case '\n': row ++; col=0;break;
			case EOF:break;
		}
	}while(ch != EOF);
	fclose(fptr);
	numberCol = col;
	numberRow = row;
	printf("The maze has %d bricks.\n",numberBrick);
	return EXIT_SUCCESS;
}
