CC = gcc
CFLAGS = -Wall -Wextra -std=c99

OBJ = main.o inventory.o spaceship.o story.o exploration.o

all: spacecowboy

spacecowboy: $(OBJ)
	$(CC) $(CFLAGS) -o spacecowboy $(OBJ)

main.o: main.c inventory.h spaceship.h story.h exploration.h
	$(CC) $(CFLAGS) -c main.c

inventory.o: inventory.c inventory.h
	$(CC) $(CFLAGS) -c inventory.c

spaceship.o: spaceship.c spaceship.h
	$(CC) $(CFLAGS) -c spaceship.c

story.o: story.c story.h
	$(CC) $(CFLAGS) -c story.c

exploration.o: exploration.c exploration.h
	$(CC) $(CFLAGS) -c exploration.c

clean:
	rm -f *.o spacecowboy
