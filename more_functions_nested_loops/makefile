CC 	= gcc
SRC	= 2-mul.c\
	  2-main.c
OBJ	= $(SRC:.c=.o)
NAME	= 2-mul
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

