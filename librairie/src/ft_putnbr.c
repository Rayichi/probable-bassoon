#include "libft.h"

void    ft_putnbr2(long n)
{
    if (n >= 10)
        ft_putnbr2(n / 10);
    ft_putchar('0' + n% 10);
}

void    ft_putnbr(int nb)
{
    long    n;

    n = nb;
    if (n < 0)
    {
        n = -n;
        ft_putchar('-');
    }
    ft_putnbr2(n);
}