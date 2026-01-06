#include "libft.h"
#include <stdio.h>

int ft_strlen(char *s)
{
int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

int main(void)
{
char s[] = "Yesim kosebasi";
printf("%d\n", ft_strlen(s));
}