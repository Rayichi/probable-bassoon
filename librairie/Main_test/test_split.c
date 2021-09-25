#include "split.c"
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    char **str;

    i = 0;
    if (ac > 1)
    {
        str = ft_split(av[1]);
        while (str[i])
        {
            printf("%s \n", str[i]);
            i++;
        }
    }
    return (0);
}