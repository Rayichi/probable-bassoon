#include "libft.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] && str)
        i++;
    return (i);
}