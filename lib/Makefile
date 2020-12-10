##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

NAME	=	lib

SRC	= 	$(wildcard *.c) \
		$(wildcard ./tools/*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS	= -I./../include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
