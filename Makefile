NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
PROJECT_NAME = libft
EXEC = test
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	ar rcs $@ $^

%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re :clean all
