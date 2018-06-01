/* maze.h */
#ifndef MAZE_H
#define MAZE_H

#define STARTSYMBOL	'S'
#define EXITASYMBOL	'E'
#define BRICKSYMBOL	'*'
#define CORRIDORSYMBOL	' '
#define INVALIDSYMBOL	'-'

typedef struct
{
	int numRow, numCol;	//size of maze
	int startRow, startCol;	//start loc
	int exitRow, exitCol;	//exit loc
	int curRow, corCol;	//cutte loc
	int **cells;
}Maze;
//
enum {ORIGIN, EAST, SOUTH, WEST, NORTH};
enum {FORWARD, BACKWARD, DONE};
Maze * Maze_construct(char * fileName);
void Maze_print(Maze * mz);


#endif
