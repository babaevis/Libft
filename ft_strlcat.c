/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:00:01 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/01 12:14:34 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int len;
	unsigned int src_len;

	i = 0;
	len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		while ((i + len < (dstsize - 1)) && src[i])
		{
			dst[i + len] = src[i];
			i++;
		}
	}
	dst[i + len] = '\0';
	if (len < dstsize)
		return (len + src_len);
	else
		return (src_len + dstsize);
}
