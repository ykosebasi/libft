/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:58:48 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/10 18:08:19 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    int len;

    i = 0;
    len = ft_strlen(src);
    

    if (size == 0)
        return (len);
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}


int main(void)
{
	char dest[] = "";
	char src[] = "qwrher";
	int size = 4;
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
}