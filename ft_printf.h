/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:49:49 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/29 07:31:25 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printchar(char c);
int		ft_printnbr(int n);
int		ft_printstr(char *str);
int		ft_printunsigned(unsigned int n);
int		ft_printhex_digit(unsigned long n, int uppercase);
int		ft_printhex(unsigned long n, int uppercase);
int		ft_sort(va_list va, const char *str, size_t *counter);
int		ft_printf(const char *format, ...);

#endif