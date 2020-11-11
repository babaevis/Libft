/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyce <kroyce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:26:29 by kroyce            #+#    #+#             */
/*   Updated: 2020/11/02 14:13:15 by kroyce           ###   ########.fr       */
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

static void	print_nums(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	int k;
	int res;

	if (n == 0 || n == -2147483648)
	{
		print_nums(n, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	k = power(count_digits(n));
	while (k > 0)
	{
		res = n / k;
		ft_putchar_fd(res + '0', fd);
		n = n - res * k;
		k /= 10;
	}
}
