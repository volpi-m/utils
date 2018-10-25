/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** put_nbr, put_nnbr, put_xnbr, put_ptr
*/

#include <stdlib.h>
#include "my.h"

int my_put_nbr(long long int nb)
{
	long long int fact = 1;

	if (nb < 0) {
		my_putchar('-');
		nb *= -1;
	}
	while ((nb / fact) >= 10)
		fact *= 10;
	while (fact > 0) {
		my_putchar((nb / fact) + '0');
		nb -= nb - nb % fact;
		fact /= 10;
	}
	return (0);
}

long long int my_put_nnbr(unsigned int nb, unsigned int n)
{
	long long int Nnb = 0;
	long long int i = 1;

	while (nb != 0) {
		Nnb = Nnb + (nb % n) * i;
		nb /= n;
		i *= 10;
	}
	return (Nnb);
}

int my_put_xnbr(unsigned int nb, unsigned int plus)
{
	int fact = 1;
	char c;

	while ((nb / fact) >= 16)
		fact *= 16;
	while (fact > 0) {
		c = (nb / fact) + '0';
		if (c > '9')
			c += plus;
		my_putchar(c);
		nb -= nb - nb % fact;
		fact /= 16;
	}
	return (0);
}

int my_put_ptr(long long int nb, unsigned int plus)
{
	long long int fact = 1;
	char c;

	while ((nb / fact) >= 16)
		fact *= 16;
	while (fact > 0) {
		c = (nb / fact) + '0';
		if (c > '9')
			c += plus;
		my_putchar(c);
		nb -= nb - nb % fact;
		fact /= 16;
	}
	return (0);
}
