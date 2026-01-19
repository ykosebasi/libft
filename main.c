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

int main (void)
{
	char s[6] = "hello";
	printf("%s\n", s);
	ft_bzero(s, 6);
	printf("%s\n", s);
}

int main(void)
{
	char dest[] = "hello";
	char src[] = "dunya";
	ft_memcpy(dest, src, 0);
	printf("%s\n", dest);
}

int main()
{
	char str[] = "abcd";
	ft_memmove(str + 1, str, 4);
	printf("%s\n", str );
}

int main()
{
	char str[] = "merhaba";
	char *p = ft_memchr(str, 'h', 7);
	printf("%s\n", p);
}

int main()
{
	char str1[] = "mea";
	char str2[] = "mer";
	printf("%d\n",ft_memcmp(str1, str2, 3));
}

int main()
{
	char str[] = "merhaba";
	char *p;
	p = ft_memset(str, 'y', 2);
	printf("%s\n", p);
}

int main()
{
	char ptr[] = "merhaba";
	size_t len;

	len = ft_strlen(ptr) + 1;
	char *copy;
	copy = ft_calloc(len, sizeof(7));

	printf("original : %s\n", ptr);
	printf("copy : %s\n", copy);
	free(copy);
}