/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:18:10 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/05 17:06:53 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		custom_strlen(const char *str, char c)
{
	int i;

	i = 0;
	while (*str == c)
		str++;
	while (*str != 0 && *str != c)
	{
		str++;
		i++;
	}
	return (i);
}

static int		count_words(const char *str, char c)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
		{
			i++;
			if (!str[i])
				return (words);
		}
		words++;
		while (str[i] != c && str[i])
			str++;
	}
	return (words);
}

static char		*allocate_word(const char *str, char c)
{
	int		len;
	char	*word;
	int		i;

	i = 0;
	len = custom_strlen(str, c);
	if (!(word = (char *)malloc(len + 1)))
		return (NULL);
	while (len--)
		word[i++] = *str++;
	word[i] = 0;
	return (word);
}

static char		**free_memory(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char			**ft_split(const char *str, char c)
{
	char	**res;
	int		i;

	if (str == NULL)
		return (NULL);
	i = 0;
	if (!(res = (char **)ft_calloc(sizeof(char *), count_words(str, c) + 1)))
		return (NULL);
	while (*str)
	{
		while (*str == c && *str)
		{
			str++;
			if (!*str)
				return (res);
		}
		if (!(res[i++] = allocate_word(str, c)))
			return (free_memory(res));
		while (*str != c && *str)
			str++;
	}
	return (res);
}
