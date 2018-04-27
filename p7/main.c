/* mian.c */
#include "mystring.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 1000 //at most 9999 chars
int main(int argc, char** argv)
{
	if(argc != 4)
	{
		printf("usage: %s command input output\n", argv[0]);
		return EXIT_FAILURE;
	}
	FILE *infptr = fopen(argv[2], "r");
	if(infptr == NULL)
	{
		printf("unable to open the input file %s !\n", argv[2]);
		return EXIT_FAILURE;
	}
	FILE *outfptr = fopen(argv[3], "w");
	if(outfptr == NULL)
	{
		printf("unable to open ther output file %s !\n", argv[3]);
		return EXIT_FAILURE;
	}

	int num_lines = 0;
	char buffer[LINE_SIZE];

	while (fgets(buffer, LINE_SIZE, infptr) != NULL)
	{
		num_lines++;
	}

	fseek(infptr, 0, SEEK_SET);
	//return file begin
	char** lines = malloc(sizeof(char*)*num_lines);
	for(int i =0 ; i<num_lines; i++)
	{
		if(feof(infptr))
		{
			printf("not enough num lines in file!\n");
			fclose(infptr);
			fclose(outfptr);
			return EXIT_FAILURE;
		}
		lines[i] = malloc(sizeof(char) * LINE_SIZE);
		fgets(lines[i],LINE_SIZE, infptr);
	}
	fclose(infptr);

	int total_length = 0;
	for (int i=0; i <num_lines; i++)
	{
		total_length += my_strlen(lines[i]);
	}

	if(strcmp(argv[1], "strlen") == 0)
		for(int i =0 ; i<num_lines; i++)
			fprintf(outfptr, "length: %d\n", my_strlen(lines[i]));
	return EXIT_SUCCESS;
}

