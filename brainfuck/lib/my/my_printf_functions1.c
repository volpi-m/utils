/*
** EPITECH PROJECT, 2017
** my_printf_functions1.c
** File description:
** some functions for my_printf
*/

#include <stdarg.h>
#include "my.h"

void disp_char(va_list va)
{
	my_putchar(va_arg(va, int));
}

void disp_int(va_list va)
{
	my_put_nbr(va_arg(va, int));
}

void disp_str(va_list va)
{
	my_putstr(va_arg(va, char*));
}

void disp_ptr(va_list va)
{
	my_putstr("0x");
	my_put_ptr(va_arg(va, long long int), 39);
}
