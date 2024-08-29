CC = gcc
CFLAGS = -I./include

SRC = src/main.c
LIBS = -L./lib -lmylib

all: my_project

my_project: $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(LIBS) -o my_project

clean:
	rm -f my_project
