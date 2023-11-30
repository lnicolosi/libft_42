CC = gcc
CFLAGS = -Wall -Wextra -Werror
PROJECT_NAME = libft
EXEC = test
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a

all : $(EXEC) $(NAME)

%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

$(NAME) : $(OBJ)
	ar rcs $@ $^

clean :
	rm -rf $(EXEC) $(OBJ)

fclean :
	rm -rf $(NAME)
