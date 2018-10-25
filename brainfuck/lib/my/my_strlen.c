/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** find the legth of a string
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != 0; i++);
	return (i);
}
