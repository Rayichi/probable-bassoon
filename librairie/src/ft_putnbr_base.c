#include "libft.h"

int ft_check_base(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        if (str[i] == '-' || str[i] == '+' || (str[i] >= 9 && str[i] <= 13))
            return (0);
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j] || str[j] == ' ')
                return (0);
            j++;
        }
        i++;
    }
    return (i);
}

void    ft_print_in_base(int nb, char *base, int length)
{
    if (nb >= length)
        ft_print_in_base(nb / length, base, length);
    write(1, &base[nb % length], 1);
}

void    ft_putnbr_base(int nb, char *base)
{
    int length;

    length = ft_check_base(base);
    if (length < 2)
        return;
    ft_print_in_base(nb, base, length);
}