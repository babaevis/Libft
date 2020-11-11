/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:00:56 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/02 16:36:56 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char c, const char *str)
{
	int i;

	i = 0;
	if (str[i] == c)
		return (1);
	while (str[i] != c && str[i])
	{
		i++;
		if (str[i] == c)
			return (1);
	}
	return (0);
}

static int	find_index(const char *str, const char *set)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (contains(str[i], set))
		i--;
	return (i);
}

static int	check_if_blank(const char *str, const char *set)
{
	while (*str)
	{
		if (!(contains(*str, set)))
			return (0);
		str++;
	}
	return (1);
}

char		*ft_strtrim(const char *str, const char *set)
{
	char	*res;
	int		i;
	int		index;
	int		size;

	if (str == NULL || set == NULL)
		return (NULL);
	if (*str == '\0')
		return ((char *)str);
	if (check_if_blank(str, set))
		return (ft_strdup("\0"));
	index = find_index(str, set);
	i = 0;
	while (contains(str[i], set))
		i++;
	size = index - i + 2;
	if (!(res = (char *)malloc(size)))
		return (NULL);
	index = 0;
	while (--size)
		res[index++] = str[i++];
	res[index] = 0;
	return (res);
}
