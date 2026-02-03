/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:35:15 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/23 15:47:48 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*total_str;

	if (!s1 || !s2)
		return (NULL);
	total_str = malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!total_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		total_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		total_str[i] = s2[j];
		i++;
		j++;
	}
	total_str[i] = '\0';
	return (total_str);
}
