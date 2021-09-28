#include "libft.h"

int ft_ws(char c)
{
    if (c == ' ' || (c <= 13 && c >= 9))
        return(1);
    return (0);
}

int ft_word(char *str)
{
    int up;
    int mot;

    up = 1;
    mot = 0;
    while (*str && str)
    {
        if (ft_ws(*str))
            up = 1;
        else if (up == 1)
        {
            mot++;
            up = 0;
        }
        str++;
    }
    return (mot);
}

int ft_strlen_split(char *str)
{
    int i;

    i = 0;
    while (*str && str && ft_ws(*str))
        str++;
    while (str[i] && !ft_ws(str[i]))
        i++;
    return (i + 1);
}

char    *ft_strcopy_split(char *str, char *sdef)
{
    while (*str && str && ft_ws(*str))
        str++;
    while (str && *str && !ft_ws(*str))
    {
        *sdef = *str;
        str++;
        sdef++;
    }
    *sdef = 0;
    return (str);
}

char    **ft_split(char *str)
{
    int     i;
    char    **sdef;
    int     word;

    i = 0;
    word = ft_word(str);
    sdef = malloc(sizeof(char*) * (word + 1));
    if (!sdef)
        return (NULL);
    sdef[word] = NULL;
    while (i < word)
    {
        sdef[i] = malloc(ft_strlen_split(str) + 1);
        if (sdef[i] == NULL)
            return (NULL);
        str = ft_strcopy_split(str, sdef[i]);
        i++;
    }
    return (sdef);
}