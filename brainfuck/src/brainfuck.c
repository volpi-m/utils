/*
** EPITECH PROJECT, 2018
** shell
** File description:
** brainfuck interpreter
*/

#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "my.h"

int analyse_arg(int ac, char **av)
{
	int size = 0;

	if (!my_strcmp(av[1], "-h")) {
		printf("DESCRIPTION: brainfuck interpreter by matteo_v\n\nUSAGE\
:\n\t%s -h : display this help and quit\n\t%s [file_name] [options]\n\nOPTIONS:\
\n\t-s size_of_memory\n", av[0], av[0]);
		exit(0);
	}
	if (ac < 2)
		exit(84);
	if (av[2] && !my_strcmp(av[2], "-s")) {
		if (av[3]) {
			size = my_getnbr(av[3]);
			return (size);
		}
	}
	return (30000);
}

char *read_file(char *file_name, int file_size)
{
	int fd = open(file_name, O_RDONLY | O_CREAT);
	char *file = malloc(sizeof(char) * file_size + 1);

	file = my_memset(file, 0, file_size + 1);
	read(fd, file, file_size + 1);
	close(fd);
	return (file);
}

void analyse_loops(char *file, char *mem, int *i)
{
	char c;
	int loop = 0;

	if (file[*i] == ']' && *mem) {
		loop = 1;
		while (loop > 0) {
			c = file[--(*i)];
			if (c == '[')
				loop--;
			else if (c == ']')
				loop++;
		}
	}
}

void analyse_instructions(char *file, char *mem)
{
	for (int i = 0; file[i]; i++) {
		if (file[i] == '>')
			mem++;
		if (file[i] == '<')
			mem--;
		if (file[i] == '+')
			++(*mem);
		if (file[i] == '-')
			--(*mem);
		if (file[i] == '.')
			my_putchar(*mem);
		if (file[i] == ',')
			(*mem) = getchar();
		analyse_loops(file, mem, &i);
	}
}

int main(int ac, char **av)
{
	struct stat buf;
	char *memory;
	int size = 0;
	int file_size = 0;
	char *file;

	size = analyse_arg(ac, av);
	stat(av[1], &buf);
	file_size = buf.st_size;
	file = read_file(av[1], file_size);
	memory = malloc(sizeof(char) * size);
	memory = my_memset(memory, 0, size);
	analyse_instructions(file, memory);
	free(file);
	free(memory);
}
