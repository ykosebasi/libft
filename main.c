#include "libft.h"

// int main(void)
// {
//     int c = 'y';
//     printf("%d\n", ft_isalnum(c));
// }

// int main(void)
// {
//     int c = 'A';
//     printf("%d\n", ft_isalpha(c)); 
//     return 0;
// }

// int main(void)
// {
//     int c ='a';
//     printf("%d\n", ft_isascii(c)); 
//     return 0;
// }

// int main(void)
// {
// int c = '2';
// printf("%d\n", ft_isdigit(c));
// }

// int main(void)
// {
// int c = '\t';
// printf("%d\n", ft_isprint(c));
// }

// int main(void)
// {
//     char dest[20] = "hello ";
//     char src[] = "world";
//     ft_strlcat(dest, src, 11);

//     printf("%s\n", dest);
//     return (0);
// }

// int main(void)
// {
// 	char dest[] = "";
// 	char src[] = "qwrher";
// 	int size = 4;
// 	ft_strlcpy(dest, src, size);
// 	printf("%s\n", dest);
// }

// int main(void)
// {
//     char *src[] = "hello";
//     printf("%ld\n",ft_strlen(src));
//     return(0);
// }

// int main(void)
// {
//     int c = '%';
//     printf("%c\n",ft_toupper(c));
// }

// int main(void)
// {
//     int c = 'A';
//     printf("%c\n",ft_tolower(c));
// }

// int main(void)
// {
//     char *src = "Merhaba İstanbul";
//     char *dest = "tan";
//     printf("%s\n", ft_strnstr(src, dest, 20));
// }

// int	main(void)
// {
// 	char *s = "Merhaba";
// 	printf("%s\n", ft_strchr(s, 'y'));
// 	return (0);
// }

// int	main(void)
// {
// 	char *s = "Merhaba";
// 	printf("%s\n", ft_strrchr(s, 'a'));
// 	return (0);
// }

// int main(void)
// {
//     printf("%d\n", ft_strncmp("merhaba", "metin", 2));
// }

// int main(void)
// {
//     char *str = "+1234ab";
//     printf("%d\n", ft_atoi(str));
// }

// int main (void)
// {
// 	char s[6] = "hello";
// 	printf("%s\n", s);
// 	ft_bzero(s, 6);
// 	printf("%s\n", s);
// }

// int main(void)
// {
// 	char dest[] = "hello";
// 	char src[] = "dunya";
// 	ft_memcpy(dest, src, 0);
// 	printf("%s\n", dest);
// }

// int main()
// {
// 	char str[] = "abcd";
// 	ft_memmove(str + 1, str, 4);
// 	printf("%s\n", str );
// }

// int main()
// {
// 	char str[] = "merhaba";
// 	char *p = ft_memchr(str, 'h', 7);
// 	printf("%s\n", p);
// }

// int main()
// {
// 	char str1[] = "mea";
// 	char str2[] = "mer";
// 	printf("%d\n",ft_memcmp(str1, str2, 3));
// }

// int main()
// {
// 	char str[] = "merhaba";
// 	char *p;
// 	p = ft_memset(str, 'y', 2);
// 	printf("%s\n", p);
// }

// int main()
// {
// 	char ptr[] = "merhaba";
// 	size_t len;

// 	len = ft_strlen(ptr) + 1;
// 	char *copy;
// 	copy = ft_calloc(len, sizeof(7));

// 	printf("original : %s\n", ptr);
// 	printf("copy : %s\n", copy);
// 	free(copy);
// }

// int main()
// {
// 	char *s1 = "merhaba";
// 	char *s2 = "42";
// 	char *total;
// 	total = ft_strjoin(s1, s2);
// 	printf("%s\n", total);
// 	free(total);
// }


// int main()
// {
// 	char	*s1 = "-12-12merhaba-12";
// 	char *total = ft_strtrim(s1, "-12");
// 	printf("%s\n", total);
// 	free (total);
// }

// int	main(void)
// {
// 	char	*s;

// 	s = ft_itoa(-42);
// 	printf("%s\n", s);
// 	free(s);
// }


// static char f(unsigned int i, char c)
// {
// 	(void)i;
//      return c + 1;
// }
// int	main(void)
// {
// 	char	*r;

// 	r = ft_strmapi("abc", f);
// 	printf("%s\n", r);
// 	free(r);
// }

// void f(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = *c + 1;
// }
// int main()
// {
// 	char s[] = "1234";
	
// 	ft_striteri(s, f);
// 	printf("%s\n", s);
// 	return(0);
// }

// int main()
// {
// 	ft_putchar_fd('A', 1);
// }

// int main()
// {
// 	ft_putstr_fd("hello", 1);
// }

// int main()
// {
// 	ft_putendl_fd("hello", 1);
// }


// int main(void)
// {
// 	ft_putnbr_fd(1234, 1);
// }

// int	main(void)
// {
// 	char	**res;
// 	int		i;

// 	res = ft_split("  merhaba   dunya  42  ", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("res[%d] = \"%s\"\n", i, res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	return (0);
// }