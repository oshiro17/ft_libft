/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:56:19 by noshiro           #+#    #+#             */
/*   Updated: 2022/08/03 12:28:32 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
