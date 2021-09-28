#include "libft.h"

char    *ft_strncat(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (dest[i])
        i++;
    while(*src && n)
    {
        dest[i] = *src;
        src++;
        i++;
        n--;
    }
    dest[i] = 0;
    return (dest);
}