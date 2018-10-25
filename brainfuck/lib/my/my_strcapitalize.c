/*
** EPITECH PROJECT, 2017
** my_strcapitalize.c
** File description:
** write a string capitalize
*/

char *check_start_of_word(char *str, int i)
{
	if (str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122)
		if (str[i+1] > 97 && str[i+1] < 122)
			str[i+1] = str[i+1] - 32;
	return (str);
}

char *my_strcapitalize(char *str)
{
	int i = 0;

	if (str[i] > 97 && str[i] < 122)
		str[i] = str[i] - 32;
	for (; str[i] != '\0'; i++)
		str = check_start_of_word(str, i);
	return (str);
}
