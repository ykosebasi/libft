/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:19:46 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/28 19:56:51 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
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

static int	word_len(char const *s, size_t i, char c)
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

static char	*copy_word(char const *s, size_t start, char c)
{
	char	*result;
	size_t	len;
	size_t	i;

	len = word_len(s, start, c);
	result = malloc(sizeof(char) *(len + 1));
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = count_words(s, c);
	result = malloc(sizeof(char *) *(j + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			result[j] = copy_word(s, i, c);
			j++;
			i += word_len(s, i, c);
		}
	}
	result[j] = NULL;
	return (result);
}
