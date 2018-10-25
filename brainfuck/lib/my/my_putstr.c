/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** write a string
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
	if (!str)
		return (84);
	write(1, str, my_strlen(str));
	return (0);
}
