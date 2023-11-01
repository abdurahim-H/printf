/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_assign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 07:31:57 by abhudulo          #+#    #+#             */
/*   Updated: 2023/11/01 06:05:06 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort(va_list va, const char *str, size_t *counter)
{
	if (*str == 'c')
		*counter += ft_printchar(va_arg(va, int));
	else if (*str == 's')
		*counter += ft_printstr(va_arg(va, char *));
	else if (*str == 'p')
	{
		*counter += ft_printstr("0x");
		*counter += ft_printhex(va_arg(va, unsigned long), 0);
	}
	else if (*str == 'd' || *str == 'i')
		*counter += ft_printnbr(va_arg(va, int));
	else if (*str == 'u')
		*counter += ft_printunsigned(va_arg(va, unsigned int));
	else if (*str == 'x')
		*counter += ft_printhex(va_arg(va, unsigned int), 0);
	else if (*str == 'X')
		*counter += ft_printhex(va_arg(va, unsigned int), 1);
	else if (*str == '%')
		*counter += ft_printchar('%');
	else
		return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_sort(args, format, &count);
		}
		else
			count += ft_printchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
