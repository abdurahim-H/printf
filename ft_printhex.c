/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhudulo <abhudulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:17:01 by abhudulo          #+#    #+#             */
/*   Updated: 2023/10/24 19:08:42 by abhudulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long n, int uppercase)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_printhex(n / 16, uppercase);
	count += ft_printchar(ft_printhex_digit(n, uppercase));
	return (count);
}
