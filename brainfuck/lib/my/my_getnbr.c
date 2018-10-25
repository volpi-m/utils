/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** get an int from a string
*/

#include <stdlib.h>

int my_getnbr(char const *str)
{
	int i = 0;
	int isneg = 1;
	int nb = 0;

	if (str == NULL)
		return (0);
	while (str[i]) {
		if (str[i] == '-')
			isneg *= -1;
		else if (str[i] >= 48 && str[i] <= 57)
			nb = nb * 10 + (str[i] - 48);
		else
			return (nb * isneg);
		i++;
	}
	return (nb * isneg);
}
