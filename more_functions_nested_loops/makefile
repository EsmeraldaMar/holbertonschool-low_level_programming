CC 	= gcc
SRC	= 7-print_diagonal.c\
	  7-main.c\
	  _putchar.c
OBJ	= $(SRC:.c=.o)
NAME	= 7-diagonals
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

