#include "libft.h"

static int      count_digits(int n)
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

static int      power(int n)
{
        int res;

        res = 1;
        while (--n)
                res *= 10;
        return (res);
}

static int     print_nums(int n)
{
        if (n == 0)
		{
			ft_putchar('0');
			return (1);
		}
        if (n == -2147483648)
		{
			ft_putstr("-2147483648");
			return (10);
		}
		return (0);
}

int            pf_putnbr(int n)
{
        int k;
        int res;
		int count;

		count = 0;
        if (n == 0 || n == -2147483648)
                return (print_nums(n));
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
				count++;
        }
		return (count);
}
