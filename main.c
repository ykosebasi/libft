#include "libft.h"
#include <stdio.h>



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

// int main(void)
// {
//     printf("%s\n", ft_split("merhaba dunya", ' ')[0]);
//     return 0;
// }

// int main()
// {
//     t_list *node = ft_lstnew("Merhaba");

//     printf("Node content: %s\n", (char *)node->content);
//     printf ("Node next: %s\n", (char *)node->next);
//     free(node);
// }


// int	main(void)
// {
// 	t_list	*list;

// 	list = ft_lstnew("dünya");
// 	ft_lstadd_front(&list, ft_lstnew("merhaba"));

// 	printf("Node content: %s\n", (char *)list->content);
// 	printf("Node next: %s\n", (char *)list->next->content);

// 	free(list->next);
// 	free(list);
// 	return (0);
// }


// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*list;

// 	node1 = ft_lstnew("Merhaba");
// 	node2 = ft_lstnew("Dünya");
	
// 	node1->next = node2;
// 	node2->next = NULL;

//     list = node1;
// 	printf("Liste boyutu: %d\n", ft_lstsize(list));

// 	free(node2);
// 	free(node1);
// }


// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*last;

// 	node1 = ft_lstnew("merhaba");
// 	node2 = ft_lstnew("42");

// 	node1->next = node2;
// 	node2->next = NULL;

// 	last = ft_lstlast(node1);
// 	printf("Son node: %s\n", (char *)last->content);

// 	free(node2);
// 	free(node1);
// }


// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*node1;
// 	t_list	*node2;

// 	node1 = ft_lstnew("Merhaba");
// 	node2 = ft_lstnew("Dünya");

// 	list = node1;
// 	ft_lstadd_back(&list, node2);
//     printf("Baş node: %s\n", (char *)list->content);
// 	printf("Son node: %s\n", (char *)ft_lstlast(list)->content);

// 	free(node2);
// 	free(node1);
// }



// void	del(void *content)
// {
// 	(void)content;
// }
// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = ft_lstnew("Merhaba");
// 	node2 = ft_lstnew("42");
// 	node3 = ft_lstnew("İstanbul");

// 	list = node1;
// 	ft_lstadd_back(&list, node2);
// 	ft_lstadd_back(&list, node3);

// 	ft_lstdelone(node2, del);

//     list->next = node3;
// 	printf("%s\n", (char *)list->content);
//     printf("%s\n", (char *)list->next->content);
// }


// void	del(void *content)
// {
// 	(void)content;
// }

// int	main(void)
// {
// 	t_list	*list = ft_lstnew("Merhaba");

// 	ft_lstadd_back(&list, ft_lstnew("42"));
// 	ft_lstadd_back(&list, ft_lstnew("İstanbul"));

// 	ft_lstclear(&list, del);

// 	if (!list)
// 		printf("Liste temizlendi.\n");
// }



// void	uppercase(void *content)
// {
// 	char *str = content;
// 	int i = 0;
// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char str1[] = "merhaba";
// 	char str2[] = "dünya";
// 	char str3[] = "istanbul";

// 	t_list	*list = ft_lstnew(str1);
// 	ft_lstadd_back(&list, ft_lstnew(str2));
// 	ft_lstadd_back(&list, ft_lstnew(str3));

// 	ft_lstiter(list, uppercase);

// 	printf("%s %s %s\n", 
// 		(char *)list->content, 
// 		(char *)list->next->content, 
// 		(char *)list->next->next->content);

// 	return (0);
// }


// void	*uppercase(void *content)
// {
// 	char	*str = content;
// 	int		i = 0;

// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	return (content);
// }

// int	main(void)
// {
// 	char	str1[] = "merhaba";
// 	char	str2[] = "dünya";

// 	t_list	*list = ft_lstnew(str1);
// 	ft_lstadd_back(&list, ft_lstnew(str2));

// 	ft_lstmap(list, uppercase, NULL);

// 	printf("%s %s\n",
// 		(char *)list->content,
// 		(char *)list->next->content);

// 	return (0);
// }



							//	BAŞTAN YAZMAYA BAŞLADIMMMMMMMMMMMMMMM


// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", ft_isalpha('t'));
// }


// int main()
// {
// 	printf("%d\n", ft_isdigit('4'));
// }


// int main()
// {
// 	printf("%d\n", ft_isalnum('?'));
// }



// int main()
// {
// 	printf("%d\n", ft_isascii('/'));
// }


// int main()
// {
// 	printf("%d\n",ft_isprint('\n'));
// }


// int main()
// {
// 	printf("%c\n", ft_toupper('a'));
// }


// int main()
// {
// 	printf("%c\n", ft_tolower('A'));
// }


// int main()
// {
// 	char *str;
// 	str = "hello";
// 	printf("%zu", ft_strlen(str));
// }



// int main()
// {
// 	char *src = "hello";
// 	char dest[4];
// 	printf("%zu\n", ft_strlcpy(dest, src, 4));
// 	printf("%s\n", dest);
// }



// int main()
// {
// 	char dest[20] = "hello";
// 	char *src = " yeşim";
// 	printf("%zu\n", ft_strlcat(dest, src, 15));
// 	printf("%s\n", dest);
// }



// int main()
// {
// 	char *str = ft_strchr("hello", 'l');
// 	printf("%s\n",str);
// }


// int main()
// {
// 	char *str = ft_strrchr("hello", 'l');
// 	printf("%s\n", str);
// }


// int main()
// {
// 	char *s1 = "hello";
// 	char *s2 = "help"; 
// 	printf("%d\n", ft_strncmp(s1, s2, 4));
// }


// int main()
// {
// 	char dest[6] = "world";
// 	char src[20] = "hello world";
// 	printf("%s\n", ft_strnstr(src, dest, 11));
// }



// int main()
// {
// 	char s[] = "hello";
// 	ft_bzero(s, 3);
// 	printf("%s\n", s);
// 	printf("%s\n", s + 3);  // bellek var yani aslında     lo çıktısı alırız burda
// }


// int main()
// {
// 	char s[] = "hello";
// 	ft_memset(s, 'c', sizeof(s));
// 	printf("%s\n", s);
// }

								// BU MEMSET İN İNT Lİ HALİ;
// int main()
// {
// 	int s[] = {1, 2, 3, 4, 5};
// 	ft_memset(s, 'a', 3 * sizeof(int));
// 	printf("%d\n", s[0]);
// }


