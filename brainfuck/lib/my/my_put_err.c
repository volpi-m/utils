/*
** EPITECH PROJECT, 2018
** lib
** File description:
** my_put_err.c
*/

#include <unistd.h>
#include "my.h"

int my_put_err(char *str)
{
	write(2, str, my_strlen(str));
	return (84);
}
