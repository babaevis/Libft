/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:23:45 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/02 16:35:01 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0')
		return (NULL);
	while (1)
	{
		if (len < ft_strlen(needle) + i)
		{
			if (*haystack)
				return (NULL);
		}
		if (!ft_strncmp(haystack + i, needle, ft_strlen(needle)))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
