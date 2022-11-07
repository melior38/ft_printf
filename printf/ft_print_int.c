#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int count;

	count = 0;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		count++;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		count++;
	}
	else
	{
		ft_putchar(nb);
		count++;
	}
	return (count);
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int	i;

	i = ft_putnbr(ft_atoi(av[1]));
	printf("\n%d\n", i);
	return (0);
}