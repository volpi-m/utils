/*
** EPITECH PROJECT, 2017
** my_printf_functions2.c
** File description:
** some functions for my_printf
*/

#include <stdarg.h>
#include "my.h"

void disp_uint(va_list va)
{
	my_put_nbr(va_arg(va, unsigned int));
}

void disp_oint(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, unsigned int), 8));
}

void disp_xint(va_list va)
{
	my_put_xnbr(va_arg(va, unsigned int), 39);
}

void disp_xxint(va_list va)
{
	my_put_xnbr(va_arg(va, unsigned int), 17 - ('M' - 'C'));
}

void disp_bint(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, long long int), 2));
}
