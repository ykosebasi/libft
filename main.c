#include "libft.h"

int main(void)
{
    int c = 'y';
    printf("%d\n", ft_isalnum(c));
}

int main(void)
{
    int c = 'A';
    printf("%d\n", ft_isalpha(c)); 
    return 0;
}

int main(void)
{
    int c ='a';
    printf("%d\n", ft_isascii(c)); 
    return 0;
}

int main(void)
{
int c = '2';
printf("%d\n", ft_isdigit(c));
}

int main(void)
{
int c = '\t';
printf("%d\n", ft_isprint(c));
}

int main(void)
{
    char dest[20] = "hello ";
    char src[] = "world";
    ft_strlcat(dest, src, 11);

    printf("%s\n", dest);
    return (0);
}

int main(void)
{
	char dest[] = "";
	char src[] = "qwrher";
	int size = 4;
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
}

int main(void)
{
    char *src[] = "hello";
    printf("%ld\n",ft_strlen(src));
    return(0);
}

int main(void)
{
    int c = '%';
    printf("%c\n",ft_toupper(c));
}

int main(void)
{
    int c = 'A';
    printf("%c\n",ft_tolower(c));
}

int main(void)
{
    char *src = "Merhaba İstanbul";
    char *dest = "tan";
    printf("%s\n", ft_strnstr(src, dest, 20));
}

int	main(void)
{
	char *s = "Merhaba";
	printf("%s\n", ft_strchr(s, 'y'));
	return (0);
}

int	main(void)
{
	char *s = "Merhaba";
	printf("%s\n", ft_strrchr(s, 'a'));
	return (0);
}

int main(void)
{
    printf("%d\n", ft_strncmp("merhaba", "metin", 2));
}

int main(void)
{
    char *str = "+1234ab";
    printf("%d\n", ft_atoi(str));
}