/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** include file for lib
*/

#ifndef MY_H
#define MY_H
#include <stdarg.h>

void my_putchar(char c);
int my_isneg(int nb);
char *my_int_to_str(int nb);
int my_put_nbr(long long int nb);
int my_put_unbr(unsigned int nb);
long long int my_put_nnbr(unsigned int nb, unsigned int n);
int my_put_xnbr(unsigned int nb, unsigned int plus);
int my_put_ptr(long long int nb, unsigned int plus);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_nbrlen(int nb);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_isprime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_memset(char *s, char c, int size);
char *my_strdup(char const *src);
void *my_malloc(int size);
int c_isalph(char c);
int my_printf(const char *str, ...);
void disp_char(va_list);
void disp_int(va_list);
void disp_str(va_list);
void disp_ptr(va_list);
void disp_uint(va_list);
void disp_oint(va_list);
void disp_xint(va_list);
void disp_xxint(va_list);
void disp_bint(va_list);
void disp_sstr(va_list);
void disp_3int(va_list);
void disp_4int(va_list);
void disp_5int(va_list);
void disp_6int(va_list);
void disp_7int(va_list);
void disp_9int(va_list);

#endif
