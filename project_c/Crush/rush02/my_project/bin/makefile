CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = my_project
CFLAGS = -I/include

SRC = src/main.c
LIBS = -L./LIB -lmylib

all: my_project

${NAME}: $(SRC)
	$(CC) $(FLAGS) $(SRC) $(LIBS) -o my_project

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean