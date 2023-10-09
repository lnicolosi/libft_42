CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = test
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all : $(EXEC)

%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

clean :
	rm -rf $(EXEC) $(OBJ)
