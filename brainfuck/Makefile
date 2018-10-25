##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	:=	brainfuck

SRC	:=	src/brainfuck.c

OBJ	:=	$(SRC:.c=.o)

LIB	:=	-Iinclude -Llib/my -lmy -g -Wall -Wextra

all:		subsystem $(NAME)

subsystem:
		cd lib/my && $(MAKE)

$(NAME):	$(SRC)
		gcc -o $(NAME) $(SRC) $(LIB)

clean:
		rm -f $(OBJ)
		cd lib/my ; make clean

fclean:
		rm -f $(NAME)
		cd lib/my ; make fclean

re:		fclean clean subsystem all

.PHONY:		re all fclean clean
