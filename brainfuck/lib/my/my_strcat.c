/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** concat 2 strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int len_dest = my_strlen(dest);
	int i = 0;

	while (src[i]) {
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
