CC = gcc
CFLAGS = -Wall -Wextra -std=c11

OBJ = main.o sorting.o pirata.o

programa: $(OBJ)
	$(CC) $(OBJ) -o programa

main.o: main.c sorting.h piratas.h
	$(CC) $(CFLAGS) -c main.c

sorting.o: sorting.c sorting.h
	$(CC) $(CFLAGS) -c sorting.c

pirata.o: pirata.c piratas.h
	$(CC) $(CFLAGS) -c pirata.c

clean:
	rm -f *.o programa
