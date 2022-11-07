
#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_printstr(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(NULL)", 6);
		return (6);
	}
	i = ft_putstr(str);
	return (i);
}

int ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int neg;
	int	res;

	i = 0
	neg = 1;
	res = 0;
	while (str[i] == 32 || str[i] < 13 && str[i] > 9)
		i++;
	if (str[i] == "-")
	{
		neg = -1;
		i++;
	}
	else if (str[i] == "+")
		i++;
	while (str[i] < '9' && str[i] > '0')
	{
		res = str[i] - '0';
		i++;
	}
	return (res);
}
