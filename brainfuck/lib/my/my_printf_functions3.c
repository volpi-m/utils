/*
** EPITECH PROJECT, 2017
** my_printf_functions3.c
** File description:
** some functions for my_printf
*/

#include <stdarg.h>
#include "my.h"

void disp_9int(va_list va)
{
	my_put_nbr(my_put_nnbr(va_arg(va, long long int), 9));
}

void disp_sstr2(int len, int j)
{
	switch (len) {
	case 1:
		my_putstr("\\00");
		my_put_nbr(j);
		break;
	case 2:
		my_putstr("\\0");
		my_put_nbr(j);
		break;
	case 3:
		my_putstr("\\");
		my_put_nbr(j);
		break;
	}
}

void disp_sstr(va_list va)
{
	char *str = va_arg(va, char*);
	int i = 0;
	int j;
	int len;

	for (i = 0; str[i]; i++) {
		if (str[i] < 32 || str[i] >= 127) {
			j = my_put_nnbr(str[i], 8);
			len = my_nbrlen(j);
			disp_sstr2(len, j);
		} else
			my_putchar(str[i]);
	}
}
