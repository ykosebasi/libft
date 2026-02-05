#include "libft.h"
#include <stdio.h>




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

						//******ÖĞREN		// BU MEMSET İN İNT Lİ HALİ;
// int main()
// {
// 	int s[] = {1, 2, 3, 4, 5};
// 	ft_memset(s, 'a', 3 * sizeof(int));
// 	printf("%d\n", s[0]);
// }


// int main()
// {
// 	char d1[20] = "hello ";
// 	char s1[6] = "world";
// 	ft_memcpy(d1, s1, 6);
// 	printf("%s\n", d1);
// }


// int main()
// {
// 	char str[] = "ABCDE123";
// 	ft_memmove(str + 4 , str, 4);
// 	printf("%s\n", str);
// }



// int main()
// {
// 	char str[] = "hello";
// 	char *p = ft_memchr(str, 'l', 5);
// 	printf("%s\n", p);
// }


			// ARADAKİ FARKI ANLAMAK ADINA STRNCMP Yİ DE EKLEDİM O NULL GÖRÜNCE STRİNG BİTTİ DİYO VE KARŞILAŞTIRMAYI BİTİRİYO 0 DÖNDÜRÜYOR
			// AMA MEMCMP NULL A BAKMAZ VE L - P FARKINI DÖNDÜRÜR
// int main()
// {
// 	char str1[] = "hel\0lo";
// 	char str2[] = "hel\0p";
// 	printf("%d\n", ft_memcmp(str1, str2, 6));
// 	printf("%d\n", ft_strncmp(str1, str2, 6));
// }



// int main()
// {
// 	char str[] = " 		-58630";
// 	printf("%d\n",ft_atoi(str));
// }


 				//BUNUN MAİNİNİ SOR!!!
// int main()
// {
// 	char *copy = ft_calloc(8, 1);
// 	printf("%s\n", copy);
// }



// int main()
// {
// 	char *now = "hello";
// 	char *ptr;

// 	ptr = ft_strdup(now);
// 	printf("%s\n", ptr);
// 	free(ptr);
// }


// int main()
// {
// 	char *str = "istanbul";
// 	char *cpy = ft_substr(str, 3, 5);
// 	printf("%s\n",cpy);
// 	free(cpy);
// }


// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = " world";
// 	char *total = ft_strjoin(s1, s2);
// 	printf("%s\n", total);
// 	free(total);
// }


// int main()
// {
// 	char *str = "--hello---";
// 	char *new = ft_strtrim(str, "-");
// 	printf("%s\n", new);
// }


// int main()
// {
// 	char **s = ft_split("--hello---yeşim--42", '-');
// 	int i;

// 	i = 0;
// 	while(s[i])
// 	{
// 		printf("%s\n", s[i]);
// 		free(s[i]);
// 		i++;
// 	}
// 	free(s);
// }



// int main()
// {
// 	int n = -123;
// 	printf("%s\n", ft_itoa(n));
// }


// static char f(unsigned int i, char c)
// {

// 	if (i % 2 == 0)
// 		return (c - 32);
// 	return (c);
// }

// int main()
// {
// 	char *s = ft_strmapi("abcd", f);
// 	printf("%s\n", s);
// 	free(s);
// }



// static void f(unsigned int i, char* c)
// {
// 	if (i % 2 == 0)
// 	*c = *c - 32;
// }

// int main()
// {
// 	char str[] = "hello";
// 	ft_striteri(str, f);
// 	printf("%s\n", str);
// }


// #include <fcntl.h>

// int main()
// {
// 	int fd;
// 	fd = open("deneme.txt", O_CREAT | O_WRONLY | O_APPEND, 0777);
// 	ft_putchar_fd('b', fd);
// 	close(fd);
// }


// #include <fcntl.h>

// int main()
// {
// 	int fd;
// 	fd = open("deneme.txt", O_CREAT | O_WRONLY |O_APPEND, 0777);
// 	ft_putstr_fd("yeşim", fd);
// 	close(fd);
// }


// #include <fcntl.h>

// int main()
// {
// 	int fd;
// 	fd = open("deneme.txt", O_CREAT | O_WRONLY |O_APPEND, 0777);
// 	ft_putendl_fd("yeşim", fd);
// 	close(fd);
// }



// #include <fcntl.h>

// int main()
// {
// 	int fd;
// 	fd = open("deneme.txt", O_CREAT | O_WRONLY |O_APPEND, 0777);
// 	ft_putnbr_fd(123, fd);
// 	close(fd);
// }


						// LİSTLER***************

// int main()
// {
// 		t_list *node;

// 		node = ft_lstnew(ft_strdup("merhaba 42"));
// 		printf("%s\n",(char *)node ->content);
// 		printf("%p\n", node -> next);
// 		free(node);
// }




void	del(void *content)
{
	free(content);
}

void *uppercase(void *c)
{
	char *s = (char *)c;
	char *new_s = ft_strdup(s);
	int i = 0;
	while (s[i])
	{
		new_s[i] = ft_toupper(new_s[i]);
		i++;
	}
	return (new_s);
}

int main()
{
	t_list *n1;
	t_list *n2;
	t_list *new;

	new = ft_lstnew(ft_strdup("yeşim"));
	n1 = ft_lstnew(ft_strdup("merhaba"));
	n2 = ft_lstnew(ft_strdup("42"));

	// ft_lstadd_front(&n1, n2);
	n1 -> next = n2;
	n2 -> next = new;
	new -> next = NULL;

	// ft_lstiter(n1, uppercase);
	t_list *new_list = ft_lstmap(n1, uppercase, del);

	// ft_lstadd_back(&n1, n2);
	// ft_lstadd_back(&n1, new);
	// printf("%d\n", ft_lstsize(n1));
	// printf("%s\n", (char *)ft_lstlast(n1) -> content);
	while(n1)
	{
		printf("%s\n", (char*) n1 -> content);
		n1 = n1 -> next;
	}

	// ft_lstclear(&n1, del);
	// if (n1 == NULL)
	// printf("liste tamamen silindi\n");
}
