#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
        return 1;
    else if('0' <= c && c <= '9')
        return 1;
    else
        return 0;
}

int main(void)
{
    int c = 'y';
    printf("%d\n", ft_isalnum(c));
}
