#include "libft.h"

void    ft_putstr(char *str)
{
    while (str && *str)
    {
        ft_putchar(*str);
        str++;
    }
}