/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 23:02:51 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/05 23:03:41 by kroyce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int k;

	k = 0;
	while (n > 0)
	{
		n /= 10;
		k++;
	}
	return (k);
}

static int	power(int n)
{
	int res;

	res = 1;
	while (--n)
		res *= 10;
	return (res);
}

static void	print_nums(int n)
{
	if (n == 0)
		ft_putchar('0');
	if (n == -2147483648)
		ft_putstr("-2147483648");
}

void		ft_putnbr(int n)
{
	int k;
	int res;

	if (n == 0 || n == -2147483648)
	{
		print_nums(n);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	k = power(count_digits(n));
	while (k > 0)
	{
		res = n / k;
		ft_putchar(res + '0');
		n = n - res * k;
		k /= 10;
	}
}