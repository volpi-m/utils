/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** check if a number is negative or not
*/

#include "my.h"

int my_isneg(int n)
{
	if (n >= 0)
		my_putchar('P');
	else
		my_putchar('N');
}
