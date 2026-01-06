#include "libft.h"
#include <stdio.h>

int ft_isalpha(int c)
{
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
            return 1;
        else
            return 0;
}

int main(void)
{
    int c = 'A';
    printf("%d\n", ft_isalpha(c)); 
    return 0;
}