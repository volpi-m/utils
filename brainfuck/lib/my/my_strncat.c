/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** concat n chars of 2 strings until
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
	int len_dest = my_strlen(dest);
	int i = 0;

	while (src[i] != '\0' && i < nb) {
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
