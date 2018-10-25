/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
	char *dest;
	int i = 0;
	int len = my_strlen(src);

	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	my_memset(dest, 0, len + 1);
	my_strcpy(dest, src);
	return (dest);
}
