#include "libft.h"

int main(void)
{
    char dest[20] = "hello ";
    char src[] = "world";
    ft_strlcat(dest, src, 11);

    printf("%s\n", dest);
    return (0);
}