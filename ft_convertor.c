/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:16:42 by abhudulo          #+#    #+#             */
/*   Updated: 2023/11/01 06:02:48 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	ssize_t	b_written;	

	b_written = write(1, &c, 1);
	if (b_written == -1)
		return (-1);
	return (1);
}

int	ft_printnbr(int n)
{
	int		len;
	ssize_t	b_written;

	len = 0;
	if (n == -2147483648)
	{
		b_written = write(1, "-2147483648", 11);
		if (b_written == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		b_written = write(1, "-", 1);
		if (b_written == -1)
			return (-1);
		n = -n;
		len++;
	}
	if (n > 9)
		len += ft_printnbr (n / 10);
	ft_printchar (n % 10 + '0');
	len++;
	return (len);
}

int	ft_printstr(char *str)
{
	int		i;
	ssize_t	b_written;

	i = 0;
	if (str == NULL)
	{
		b_written = write(1, "(null)", 6);
		if (b_written == -1)
			return (-1);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_printchar (str[i]);
		i++;
	}
	return (i);
}

int	ft_printunsigned(unsigned int n)
{
	int		len;

	len = 0;
	if (n > 9)
		len += ft_printunsigned (n / 10);
	ft_printchar (n % 10 + '0');
	len++;
	return (len);
}

int	ft_printhex_digit(unsigned long n, int uppercase)
{
	int	reminder;
	int	result;

	reminder = n % 16;
	if (reminder < 10)
		result = reminder + '0';
	else
	{
		if (uppercase)
			result = reminder - 10 + 'A';
		else
			result = reminder - 10 + 'a';
	}
	return (result);
}
