CC 	= gcc
SRC	= 6-print_line.c\
	  6-main.c\
	  _putchar.c
OBJ	= $(SRC:.c=.o)
NAME	= 6-lines
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

