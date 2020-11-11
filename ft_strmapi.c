/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:58:30 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/02 13:31:46 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int n, char c))
{
	int		len;
	char	*res;
	int		i;

	if (str == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	res[len] = 0;
	while (len--)
	{
		res[i] = f(i, str[i]);
		i++;
	}
	return (res);
}
