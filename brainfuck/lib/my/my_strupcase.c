/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** return a string only in uppercase
*/

char *my_strupcase(char *str)
{
	int i = 0;
	char *s = str;

	while (str[i] != '\0') {
		str[i] = str[i]-32;
		i++;
	}
	return (s);
}
