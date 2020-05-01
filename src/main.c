// *Comments are Code*
// ------------------------------------------
// Comments explain code to other programmers
// Code explains the comments to the computer
// ------------------------------------------
//                                Andy Harris

/*
 ## Algorithm ##
 1. draw the map on the screen
 2. spawn snake on the center of the map
 3. spawn food at a random location of the map
 4. while user don't want to exit
 5. move forward the snake
 6. while snake is moving wait input from user
 7. if user's input direction is same as snake's moving direction
 8. or opposite direction then ignore input
 9. else, listen to user and switch snake's direction
10. if snake's head encounters with food, then delete food from
	the screen and add one block to tail of snake
11. go to step 4
*/

#include "main_menu.h"

int main( void )
{
	draw_main_menu();

	return 0;
}

