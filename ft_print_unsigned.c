/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:48:52 by noshiro           #+#    #+#             */
/*   Updated: 2022/07/31 20:01:10 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	unsigned int	len;
	char			*num;

	len = 0;
	num = ft_uitoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
