CC 	= gcc
SRC	= 5-more_numbers.c\
	  5-main.c\
	  _putchar.c
OBJ	= $(SRC:.c=.o)
NAME	= 5-more_numbers
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

