#include "game.h"

#define BUFFER_X_SIZE 30
#define BUFFER_Y_SIZE 30

// game space for drawing elements
char buffer[ BUFFER_X_SIZE ][ BUFFER_Y_SIZE ];

// generate random number between 0 and $range
int generate_random_integer( int range )
{
    srand( time( NULL ) );
    int r = rand();
    r = r % range;

    return r;
}

// draws walls, snake and food
void scene_drawer()
{
    printf("LOG: scene_drawer OK");
    draw_map();
    draw_snake();
    draw_food();
}
