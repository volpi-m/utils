/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** main funtions for my_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int call_functions(va_list va, char c)
{
	int pass = 1;
	int i = 0;
	char li[17] = "csiduoxXbpS345679";

	void (*disp[17])(va_list) = {disp_char, disp_str, disp_int, disp_int,
				disp_uint, disp_oint, disp_xint, disp_xxint,
				disp_bint, disp_ptr, disp_sstr, disp_3int,
				disp_4int, disp_5int, disp_6int, disp_7int,
				disp_9int};
	for (i = 0; li[i] != 0; i++) {
		if (li[i] == c) {
			(*disp[i])(va);
			pass = 0;
		}
	}
	if (pass == 1) {
		my_putchar('%');
		my_putchar(c);
	}
}

int check_percentage(int i, char const *str, va_list va)
{
	i++;
	if (str[i] == '%')
		my_putchar('%');
	else
		call_functions(va, str[i]);
	return (i);
}

int my_printf(const char *str, ...)
{
	va_list va;
	int i = 0;

	va_start(va, str);
	for (i = 0; str[i] != 0; i++) {
		if (str[i] != '%')
			my_putchar(str[i]);
		else if (str[i] == '%')
			i = check_percentage(i, str, va);
	}
	va_end(va);
	return (0);
}
