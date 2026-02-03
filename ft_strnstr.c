/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:01:21 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/17 19:33:23 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dest, size_t len)
{
	size_t	i;
	size_t	j;

	if (dest[0] == '\0')
		return ((char *)src);
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (src[i + j] == dest[j] && (i + j) < len)
		{
			if (dest[j + 1] == '\0')
				return ((char *)&src[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
