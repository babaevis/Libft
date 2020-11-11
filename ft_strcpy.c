/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:34:54 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/07 00:05:38 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strcpy(char *dst, const char *src)
{
    size_t i;

    i = 0;
    if (src == NULL)
        return (0);
    if (dst == NULL)
        return (ft_strlen(src));
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (ft_strlen(src));
}
