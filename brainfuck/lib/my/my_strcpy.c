/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** copy a string to another
*/

char *my_strcpy(char *dest, char const *src)
{
	int i = 0;

	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
