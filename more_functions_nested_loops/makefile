CC 	= gcc
SRC	= 1-isdigit.c\
	  1-main.c
OBJ	= $(SRC:.c=.o)
NAME	= 1-isdigit
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

