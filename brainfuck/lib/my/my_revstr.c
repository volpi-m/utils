/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** reverse a string
*/

#include "my.h"

char *my_revstr(char *str)
{
	int len_str = my_strlen(str) - 1;
	int i = 0;
	char a;

	while (i < len_str) {
		a = str[i];
		str[i] = str[len_str];
		str[len_str] = a;
		i++;
		len_str--;
	}
	return (str);
}
