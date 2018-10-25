##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	:=	libmy.a

SRC	:=	get_next_line.c\
		my_char_isalpha.c\
		my_compute_power_rec.c\
		my_compute_square_root.c\
		my_find_prime_sup.c\
		my_getnbr.c\
		my_isneg.c\
		my_is_prime.c\
		my_memset.c\
		my_nbrlen.c\
		my_printf.c\
		my_printf_functions1.c\
		my_printf_functions2.c\
		my_printf_functions3.c\
		my_printf_functions4.c\
		my_putchar.c\
		my_put_nbr.c\
		my_put_unbr.c\
		my_putstr.c\
		my_put_err.c\
		my_revstr.c\
		my_showmem.c\
		my_showstr.c\
		my_sort_int_array.c\
		my_strcapitalize.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_strdup.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strstr.c\
		my_strupcase.c\
		my_swap.c

OBJ	:=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -g -c $(NAME) $(OBJ) -Wall -Wextra --coverage

$(NAME):
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:		fclean clean all

.PHONY:		re all fclean clean
