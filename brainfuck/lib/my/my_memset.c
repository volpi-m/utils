/*
** EPITECH PROJECT, 2017
** my_memset.c
** File description:
** Replace memory by characters.
*/

char *my_memset(char *s, char c, int size)
{
	for (int i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
