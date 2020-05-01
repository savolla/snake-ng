TARGET = snake
CC = gcc
CFLAGS = -std=c99 -Werror -Wall -ggdb

default: $(TARGET)

$(TARGET): main.o food.o map.o snake.o main_menu.o game.o 
	$(CC) $(CFLAGS) -o $(TARGET) main.o food.o map.o snake.o main_menu.o game.o

map.o: map.h map.c
	$(CC) $(CFLAGS) -c map.c
	
snake.o: snake.h snake.c
	$(CC) $(CFLAGS) -c snake.c

food.o: food.h food.c
	$(CC) $(CFLAGS) -c food.c

main_menu.o: main_menu.h main_menu.c
	$(CC) $(CFLAGS) -c main_menu.c
	
game.o: game.h game.c
	$(CC) $(CFLAGS) -c game.c

clean:
	$(RM) *.o $(TARGET)
