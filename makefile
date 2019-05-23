#make file with variables and clean
SRC=*.c

OBJ=*.o

CC=gcc

TARGET=main

LIB=libmine.a

CFLAGS=-Wall -Werror -Wextra 
LINK=-L. -lmine

all:
	$(CC) -c $(CFLAGS) $(SRC)
	ar arcs $(LIB) $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) 
	$(CC) $(LINK)


clean:
	rm *.o $(TARGET)
