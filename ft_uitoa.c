#include "ft_printf.h"

static	size_t	count_digits(int n)
{
	size_t	digits_num;

	digits_num = 1;
	n = n / 10;
	while (n)
	{
		n = n / 10;
		digits_num++;
	}
	return (digits_num);
}

char	*ft_uitoa(unsigned int n)
{
	char		*str_num;
	size_t		digits_num;

	digits_num = 0;
	
	digits_num = digits_num + count_digits(n);
	str_num = (char *)ft_calloc(sizeof(char), (digits_num + 1));
	if (!str_num)
		return (NULL);
	while (digits_num--)
	{
		*(str_num + digits_num) = n % 10 + '0';
		n = n / 10;
	}
	return (str_num);
}
