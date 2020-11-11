/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:20:34 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/01 14:35:49 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int k, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c;

	c = (unsigned char)k;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
