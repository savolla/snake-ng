#include "map.h"
#include <stdio.h>

#define MAP_SIZE_X (8)
#define MAP_SIZE_Y (8)
char map[ MAP_SIZE_X ][ MAP_SIZE_Y ]={
{'*','*','*','*','*','*','*','*'},
{'*',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ','*'},
{'*',' ',' ',' ',' ',' ',' ','*'},
{'*','*','*','*','*','*','*','*'}};

void draw_map( void )
{		
	int i, j;

	for ( i = 0; i < 8; ++i )
	{
		for ( j = 0; j < 8; ++j )
		{
			printf( "%c", map[i][j] );		
		}
		printf( "\n" );
	}
}
