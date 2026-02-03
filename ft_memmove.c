/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:08:58 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/18 19:59:50 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d1;
	const unsigned char	*s1;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d1 = (unsigned char *)dest;
	s1 = (unsigned char *)src;
	if (d1 < s1)
	{
		i = 0;
		while (i < n)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			d1[i] = s1[i];
	}
	return (dest);
}
