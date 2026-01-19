/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:23 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/19 18:45:52 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);

	if(start >= s_len)
	{
		str = malloc(1);
		str[0] = '\0';
	}
	else
		str = malloc(min(len, s_len - start) + 1);
	i = 0;
	while (i < min(len, s_len - start))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);		
}