/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two strings
*/

#include "my.h"

int compare_string(char const *s1, char const *s2)
{
	int i = 0;
	int res = 0;

	while (s1[i]) {
		if (s1[i] != s2[i]) {
			res = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (res);
}

int my_strcmp(char const *s1, char const *s2)
{
	int res;

	if (my_strlen(s1) > my_strlen(s2))
		return (1);
	else if (my_strlen(s1) < my_strlen(s2))
		return (-1);
	else {
		res = compare_string(s1, s2);
		return (res);
	}
}
