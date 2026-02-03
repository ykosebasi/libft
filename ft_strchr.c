/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:55:21 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/23 17:14:13 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	b;

	b = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == b)
			return ((char *)&s[i]);
		i++;
	}
	if (b == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
