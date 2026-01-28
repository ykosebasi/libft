/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:46:21 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/17 13:01:28 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t dlen;
	size_t slen;

	dlen = 0;
	while (dest[dlen] != '\0' && dlen < size)
		dlen++;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	i = 0;
	while (src[i] != '\0' && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen < size)
		dest[dlen + i] = '\0';
	if (size <= dlen)
		return (size + slen);
	return (dlen + slen);
}



