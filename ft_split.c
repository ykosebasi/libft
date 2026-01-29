/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:19:46 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/27 18:59:36 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	unsigned int	word_num;
	size_t			i;

	i = 0;
	word_num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			if (i == 0 || s[i - 1] == c)
			{
				word_num++;
				i++;
			}
			else
				i++;
		}
	}
	return (word_num);
}

static int	ft_word_len(char const *s, size_t i, char c)
{
	unsigned int	one_word_len;

	one_word_len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		one_word_len++;
		i++;
	}
	return (one_word_len);
}

static char	*ft_copy_word(char const *s, size_t start, char c)
{
	char	*result;
	size_t	len;
	size_t	i;

	len = ft_word_len(s, start, c);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static char	**ft_free_result(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	int		j;

	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			result[j] = ft_copy_word(s, i, c);
			if (!result[j])
				return (ft_free_result(result, j));
			i += ft_word_len(s, i, c);
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
