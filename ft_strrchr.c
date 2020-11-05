/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:18:28 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/01 14:42:59 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)s + len);
	if (*s == 0 || s == NULL)
		return (NULL);
	while (len--)
	{
		if (s[len] == c)
			return ((char *)s + len);
	}
	return (NULL);
}
