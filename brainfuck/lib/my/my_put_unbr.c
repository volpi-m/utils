/*
** EPITECH PROJECT, 2017
** my_put_Unbr.c
** File description:
** put unsigned number
*/

#include "my.h"

int my_put_unbr(unsigned int nb)
{
	int fact = 1;

	while ((nb/fact) >= 10)
		fact *= 10;
	while (fact > 0) {
		my_putchar((nb / fact) + '0');
		nb -= nb - nb % fact;
		fact /= 10;
	}
	return (0);
}
