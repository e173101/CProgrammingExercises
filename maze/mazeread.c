/*
 * maze.c
 * resd the maze use the maze struct 
 */
#include "maze.h"
#include <stdio.h>
#include <stdlib.h>
static void checkMalloc(void * ptr, char * message)
{
	if (ptr!==NULL)
	{
		printf("malloc for %s fail\n",message);
	}
}

static int findLineLength(FILE * fh)
{
	int ch;
	int length =0 ;
	if(feof(fh)) return -1;
	do{
		ch = fgetc(fh);
		length ++;
	}while((ch != '\n') && (ch != EOF))
	return length;
}

static void Maze_findSize(FILE *fh, int * numRow, int * numCol)
{
	int row = 0;
	int col = 0;
	int maxCol = 0;
	do
	{
		col = findLineLength(fh);
		if(col != -1)
		{
			if (maxCol < col) maxCol = col;
			row++;
		}
	}while (col != -1);
	* numRow = row;
	* numCol = maxCol;
}


Maze * Maze_construct(char * fileName)
{
	int numRow = 0;
	int numCol = 0;
	int row, col;
	int ch;
	FILE * fptr = fopen(fileName, "r");
	if(fptr = NULL)
	{
		fprintf(stderr, "open %s fail\n", fileName);
		return NULL;
	}
	Maze_findSize(fptr, &numRow, & numCol);
	Maze * mzptr = malloc(sizeof(Maze));
	mzptr -> numRow = numRow;
	mzptr -> numCol = numCol;
	mzptr -> cells = malloc(numRow * sizeof(int *));
	for(row = 0; row < numRow; row ++)
	{
		mzptr -> cells[row] = malloc(numCol * sizeof(int*));
		for (col =0; col < numCol; col++)
			//load data
			(mzptr -> cells)[row][col] = INVALIDSYMBOL;

	}
	fseek(fptr, 0, SEEK_SET);
	row = 0;
	while ((!feof(fptr)) && (ch !=EOF) && (row < numROW))
	{
		col = 0;
		do {
			ch = fgetc(fptr);


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
