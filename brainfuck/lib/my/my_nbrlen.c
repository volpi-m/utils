/*
** EPITECH PROJECT, 2017
** my_nbrlen.c
** File description:
** find the length of a number
*/

int my_nbrlen(int nb)
{
	int a = 0;
	int i = 0;

	for (i = 0; nb > 0; i++)
		nb /= 10;
	return (i);
}
