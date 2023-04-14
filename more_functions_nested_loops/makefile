CC 	= gcc
SRC	=10-print_triangle.c\
	  10-main.c\
	  _putchar.c
OBJ	= $(SRC:.c=.o)
NAME	= 10-triangles
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

