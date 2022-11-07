#include <stdarg.h>
#include "ft_printf.h"
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		form;

	va_start(args, str);
	form = args;
}