/*
** EPITECH PROJECT, 2017
** my_is_prime.c
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
	int i = 2;
	int test = 0;

	while (i < nb) {
		if (nb % i == 0) {
			return (0);
			test = 1;
		}
		i++;
	}
	if (test == 0)
		return (1);
}
