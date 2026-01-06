#include "libft.h"
#include <stdio.h>

int ft_isprint(int c)
{
    if (126 >= c && c >= 32)
        return 0;
    else
        return 1;
}

int main(void)
{
int c = '\t';
printf("%d\n", ft_isprint(c));
}