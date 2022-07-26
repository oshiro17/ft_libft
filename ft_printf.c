#include "ft_printf.h"

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
int ft_print_unsigned(unsigned int	n){

	unsigned int	len;
	char			*num;

	len = 0;
	num = ft_uitoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	// if (format == 'c')
	// 	print_length += ft_printchar(va_arg(args, int));
	// else if (format == 's')
	// 	print_length += ft_printstr(va_arg(args, char *));
	// else if (format == 'p')
	// 	print_length += ft_print_ptr(va_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	// else if (format == 'x' || format == 'X')
	// 	print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
#include <libc.h>
int main()
{
	// char *s;
	// s = malloc(INT_MAX);
	// s[INT_MAX-1] = '\0';
	// memset(s,'a',INT_MAX-1);
   ft_printf("%u",(unsigned int)INT_MAX+3);
    return(0);
}