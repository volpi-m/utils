/*
** EPITECH PROJECT, 2018
** my_char_isalpha.c
** File description:
** minishell1
*/

int c_isalph(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
