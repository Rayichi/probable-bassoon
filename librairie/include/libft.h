#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

char    **ft_split(char *str);
int     ft_strlen(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_swap(int *a, int *b);
char    *ft_strdup(char *str);
void    ft_putnbr(int nb);
int     ft_strcmp(char *s1, char *s2);

#endif