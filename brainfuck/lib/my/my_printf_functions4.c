/*
** EPITECH PROJECT, 2017
** my_printf_functions4.c
** File description:
** some functions for my_printf
*/

#include <stdarg.h>
#include "my.h"

void disp_3int(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, long long int), 3));
}

void disp_4int(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, long long int), 4));
}

void disp_5int(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, long long int), 5));
}

void disp_6int(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, long long int), 6));
}

void disp_7int(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, long long int), 7));
}
