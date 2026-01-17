/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:53:46 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/17 19:31:58 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char b;

    b = (char)c;
    i = 0;
    while (s[i] != '\0')
        i++;
    while (i >= 0)
    {
        if (s[i] == b)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}
