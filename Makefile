TARGET = snake
CC = gcc
CFLAGS = -std=c99 -Werror -Wall -ggdb

default: $(TARGET)

$(TARGET): main.o food.o map.o snake.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o food.o map.o snake.o

map.o: map.h map.c
	$(CC) $(CFLAGS) -c map.c
	
snake.o: snake.h snake.c
	$(CC) $(CFLAGS) -c snake.c

food.o: food.h food.c
	$(CC) $(CFLAGS) -c food.c

clean:
	$(RM) *.o $(TARGET)
