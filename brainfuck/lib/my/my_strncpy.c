/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** copy n chars from one string to another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	while (n > i) {
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
