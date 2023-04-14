CC 	= gcc
SRC	=8-print_square.c \
	  8-main.c\
	  _putchar.c
OBJ	= $(SRC:.c=.o)
NAME	= 8-squares
RM	= rm -f
CFLAGS	= -Wall -Werror -Wextra -pedantic -std=gnu89
all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)	

clean: 	
	$(RM) *~ $(NAME)
oclean: 
	$(RM) $(OBJ)
fclean: clean oclean
re: oclean all

