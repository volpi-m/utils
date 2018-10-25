/*
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** return a string in lowercase
*/

char *my_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		str[i] = str[i]+32;
	return (str);
}
