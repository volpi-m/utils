#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define uint unsigned int

int display_help(int ac, char **av)
{
	if (ac == 2 && !strcmp(av[1], "-h")) {
		printf("%s: a C program made for ruining clean code\n\nUSAGE:\n\t%s file_name\
 [new_file_name]\n\tthe default name of the new file is boosted_code.c\n\nDESCRIPTION:\n\tTake\
 a C clean code to ruin it.\n\tReplace '{' by '<%%', '}' by '%%>', '[' by '<:', ']' by ':>' and\
 '#' by '%%:'.\n\tDelete all tabs, line breaks and useless spaces.\n\tReplace all defaults types\
 with some funny define\n\nWARNING:\n\tIf/elseif/else statements with only one line and no bracket\
 didn't work.\n", av[0], av[0]);
		return (0);
	}
	return (1);
}

FILE *get_file(char **av)
{
	FILE *file = NULL;

	if (av[1] == NULL)
		exit(84);
	file = fopen(av[1], "r");
	if (!file)
		exit(84);
	return (file);
}

FILE *set_new_file(char **av)
{
	char *file_name = NULL;
	FILE *new_file = NULL;

	if (av[1] == NULL || av[2] == NULL)
		file_name = strdup("boosted_code.c");
	else
		file_name = strdup(av[2]);
	new_file = fopen(file_name, "w");
	free(file_name);
	return (new_file);
}

void free_files(FILE *file, FILE *new_file)
{
	fclose(file);
	fclose(new_file);
}

void write_define(FILE *new_file)
{
	char *defines[9] = {"define BIBAS void\n", "define ALED int\n", "define OSKOUR char\n",
			    "define OK char*\n", "define ZULUL long int\n", "define SUPER short\n",
			    "define AXELM long long int\n", "define DADOU NULL\n", NULL};

	for (int i = 0; defines[i]; i++) {
		fwrite("%:", 1, 2, new_file);
		fwrite(defines[i], 1, strlen(defines[i]), new_file);
	}
}

void write_special_chars(char *line, uint *i, FILE *new_file)
{
	char *specials_char = "{}[]#";
	char *substitute[6] = {"<%", "%>", "<:", ":>", "%:", NULL};

	for (int j = 0; specials_char[j]; j++) {
		if (line[*i] == specials_char[j]) {
			fwrite(substitute[j], 1, 2, new_file);
			*i += 1;
		}
	}
}

int write_spaces(char *line, uint *i)
{
	char *chars = "()=*,{}[]+-/!;&|";

	if (line[*i] == ' ') {
		for (int j = 0; chars[j]; j++) {
			if (line[*i + 1] == chars[j] || (((int)(*i) - 1) >= 0 && line[*i - 1] == chars[j])) {
				return (1);
			}
		}
	}
	return (0);
}

void write_types(char *line, uint *i, FILE *new_file)
{
	char *types[8] = {"void", "int", "char", "char*", "long int", "short", "long long int", NULL};
	char *replace[8] = {"BIBAS", "ALED", "OSKOUR", "OK", "ZULUL", "SUPER", "AXELM", NULL};
	int len = 0;

	for (int j = 0; types[j]; j++) {
		len = strlen(types[j]);
		if (!strncmp(line + *i, types[j], len) && (line[*i + len] == ' ' || line[*i + len == ')']) &&
		    (*i == 0 || line[*i - 1] == '\t' || line[*i - 1] == '(' || line[*i - 1] == ' ' || line[*i - 1] == ',' || line[*i - 1] == ';')) {
			fwrite(replace[j], 1, strlen(replace[j]), new_file);
			*i += len;
		}
	}
	if (!strncmp(line + *i, "NULL", 4)) {
		fwrite("DADOU", 1, 5, new_file);
		*i += 4;
	}
}

void analyse_line(char *line, FILE *new_file)
{
	int switch_char = 1;
	int switch_point = 1;
	int ret = 0;

	for (uint i = 0; i < strlen(line); i++) {
		if (line[i] == '"')
			switch_point *= -1;
		else if (line[i] == '\'')
			switch_char *= -1;
		if (switch_char == 1 && switch_point == 1) {
			write_special_chars(line, &i, new_file);
			write_types(line, &i, new_file);
			ret = write_spaces(line, &i);
		}
		if (!ret && line[i] == ' ')
			fwrite(" ", 1, 1, new_file);
		if ((line[i] != '\t' && line[i] != '\n' && line[i] != ' ') || (line[i] == '\n' && line[0] == '#'))
			fwrite(&line[i], 1, 1, new_file);
		ret = 0;
	}
}

int main(int ac, char **av)
{
	FILE *file = NULL;
	FILE *new_file = NULL;
	char *line = NULL;
	size_t size = 512;
	ssize_t bytes_read = 0;
	int return_value = display_help(ac, av);

	if (return_value == 0)
		return (0);
	else if (ac < 2)
		return (84);
	file = get_file(av);
	new_file = set_new_file(av);
	write_define(new_file);
	do {
		bytes_read = getline(&line, &size, file);
		if (bytes_read != -1)
			analyse_line(line, new_file);
		free(line);
		line = NULL;
	} while (bytes_read != -1);
	free_files(file, new_file);
	return (0);
}
