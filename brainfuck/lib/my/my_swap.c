/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** swap 2 numbers
*/

void my_swap(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
