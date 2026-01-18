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
	unsigned char	*d1;
	unsigned char	*s1;
	size_t			i;

	d1 = (unsigned char *)dest;
	s1 = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			d1[i] = s1[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d1[i - 1] = s1[i - 1];
			i--;
		}
	}
	return (d1);
}
