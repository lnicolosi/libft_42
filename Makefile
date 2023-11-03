CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = test
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
LIB = libft.a

all : $(EXEC) $(LIB)

%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

$(LIB) : $(OBJ)
	ar rcs $@ $^

clean :
	rm -rf $(EXEC) $(OBJ) $(LIB)
