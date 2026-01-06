#include "libft.h"
#include <stdio.h>

int ft_isascii(int c)
{
   if ('0' <= c && c <= '127')
        return 1;
    else
        return 0; 
}

int main(void)
{
    int c ='ç';
    printf("%d\n", ft_isascii(c)); 
    return 0;
}