CC 	= gcc
SRC	= 4-print_most_numbers.c\
	  4-main.c\
	  _putchar.c
OBJ	= $(SRC:.c=.o)
NAME	= 4-print_most_numbers
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

