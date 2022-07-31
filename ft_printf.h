/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:00 by ajordan-          #+#    #+#             */
/*   Updated: 2022/07/31 20:05:37 by noshiro          ###   ########.fr       */
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

void			ft_putchar_fd(char c, int fd);
void			*ft_calloc(size_t count, size_t size);
void			ft_bzero(void *s, size_t n);
int				ft_printf(const char *format, ...);
int				ft_formats(va_list args, const char format);
int				ft_printchar(int c);
int				ft_printstr(char *str);
int				ft_print_ptr(unsigned long long ptr);
int				ft_putnbr_fd(int n);
int				ft_print_unsigned(unsigned int n);
int				ft_print_hex(unsigned int num, const char format);
int				ft_printpercent(void);
size_t			count_digits(int n);
char			*ft_itoa(int n);
void			ft_putstr(char *str);
void			ft_put_ptr(uintptr_t num);
int				ft_ptr_len(uintptr_t num);
char			*ft_uitoa(unsigned int n);
int				ft_num_len(unsigned	int num);
void			ft_put_hex(unsigned int num, const char format);
int				ft_hex_len(unsigned	int num);

#endif
