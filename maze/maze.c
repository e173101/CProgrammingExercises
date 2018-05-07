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
	int startRow ,startCol;
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
			case 'S': startRow = row; startCol = col; break;
			case 'E': exitRow = row; exitCol = col;break;
			default: break;
		}
		switch(ch)
		{
			default: col ++;break;
			case '\n': row ++; numberCol = col;col=0;break;
			case EOF:break;
		}
	}while(ch != EOF);
	fclose(fptr);
	numberRow = row;
	printf("The maze has %d bricks.\n",numberBrick);
	printf("The maze has %d rows.\n",numberRow);
	printf("The maze has %d cols.\n",numberCol);
	printf("The starting location is at (%d %d) .\n",startRow, startCol);
	printf("The exit is at (%d %d) .\n",exitRow, exitCol);
	printf("The maze has %d cols.\n",numberCol);
	return EXIT_SUCCESS;
}
