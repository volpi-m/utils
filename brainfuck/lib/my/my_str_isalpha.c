/*
** EPITECH PROJECT, 2017
** my_str_isalpha.c
** File description:
** check if a file is only composed of letters
*/

int my_str_isalpha(char const *s)
{
	int bool = 1;

	for (int i = 0; s[i]; i++) {
		if ((s[i] < 65 && s[i] > 90) || (s[i] < 97 && s[i] > 122))
			bool = 0;
	}
	return (bool);
}
