CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = my_project
CFLAGS = -I/include

SRC = src/main.c
LIBS = -L./LIB -lmylib
OBJ = $(SRC:.c=.o);

all: my_project

${NAME}: $(SRC)
	$(CC) $(FLAGS) $(SRC) $(LIBS) -o my_project

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean

all.PHONY : all clean fclean re

make
./my_project