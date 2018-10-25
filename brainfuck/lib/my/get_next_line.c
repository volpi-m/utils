/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** get next line
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "my.h"

char *alloc_save(char *save, int *read_bytes, int fd)
{
	if (save == NULL) {
		save = malloc(sizeof(char) * (READ_SIZE + 1));
		if (!save)
			return (NULL);
		*read_bytes = read(fd, save, READ_SIZE);
		save[*read_bytes] = 0;
	}
	return (save);
}

char *my_strncpy_gnl(char const *src, int size)
{
	char *dest;
	int i;

	dest = malloc(sizeof(char) * (my_strlen(src) + 1));
	for (i = 0; i < size && src[i]; i++)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

char *my_strcat_gnl(char *s1, char *s2)
{
	int len = my_strlen(s1) + my_strlen(s2);
	char *result = malloc(sizeof(char) * (len + 1));
	int i = 0;
	int j = 0;

	if (!result)
		return (NULL);
	result[len] = 0;
	for (; i < my_strlen(s1); i++, j++)
		result[i] = s1[j];
	j = 0;
	for (; i < len; i++, j++)
		result[i] = s2[j];
	result[i] = 0;
	free(s2);
	return (result);
}

int check_line(char const *str)
{
	int i;

	for (i = 0; str[i] != 0; i++) {
		if (str[i] == '\n')
			return (0);
	}
	return (1);
}

char *get_next_line(int fd)
{
	static char *save = NULL;
	char *buff = malloc(sizeof(char) * (READ_SIZE + 1));
	char *result;
	static int read_bytes = 0;
	int i = 0;

	save = alloc_save(save, &read_bytes, fd);
	if (!save || !buff)
		return (NULL);
	while (check_line(save) && (read_bytes > my_strlen(save) ||
	read_bytes == READ_SIZE)) {
		read_bytes = read(fd, buff, READ_SIZE);
		buff[read_bytes] = 0;
		save = my_strcat_gnl(save, buff);
	}
	for (; save[i] != '\0' && save[i] != '\n'; i++);
	if (my_strlen(save) == 0 && save[i] == '\0' && read_bytes < READ_SIZE)
		return (NULL);
	result = my_strncpy_gnl(save, i);
	save += i + ((save[i] == '\n') ? 1 : 0);
	return (result);
}
