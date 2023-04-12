CC 	= gcc
SRC	= 3-print_numbers.c\
	  3-main.c\
	  _putchar.c
OBJ	= $(SRC:.c=.o)
NAME	= 3-print_numbers
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

