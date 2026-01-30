/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:48:57 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/23 17:58:21 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		count;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else
			break ;
	}
	j = ft_strlen(s1);
	count = 0;
	while (s1[j - 1])
	{
		if (ft_strchr(set, s1[j - 1]))
			count++;
		else
			break ;
		j--;
	}
	return (ft_substr(s1, i, (ft_strlen(s1) - i - count)));
}
