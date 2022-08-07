/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:04:35 by noshiro           #+#    #+#             */
/*   Updated: 2022/08/06 22:10:51 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "./libft/libft.h"

// int         ft_ptr_len(uintptr_t num);
// void	    ft_put_ptr(uintptr_t num);
// int	        ft_print_ptr(unsigned long long ptr);
// int	        ft_formats(va_list args, const char format);
// int	        ft_printf(const char *str, ...);

int				ft_printf(const char *format, ...);
int				ft_hex_len(unsigned int num);
int				ft_formats(va_list args, const char format);
int				ft_printchar(int c);
int				ft_printstr(char *str);
int				ft_print_ptr(unsigned long long ptr);
int				ft_print_unsigned(unsigned int n);
int				ft_print_hex(unsigned int num, const char format);
int				ft_printpercent(void);
size_t			count_digits(int n);
void			ft_putstr(char	*str);
void			ft_put_ptr(uintptr_t num);
int				ft_ptr_len(uintptr_t num);
char			*ft_uitoa(unsigned int n);
int				ft_num_len(unsigned	int num);
void			ft_put_hex(unsigned int num, const char format);
int				ft_printnbr(int n);

#endif