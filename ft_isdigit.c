#include "libft.h"
#include <stdio.h>

int ft_isdigit(int c)
{
    if ('0' <= c && c <= '9')
        return 1;
    else
        return 0;
}

int main(void)
{
int c = '2';
printf("%d\n", ft_isdigit(c));
}