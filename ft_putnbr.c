/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:45:29 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/18 17:46:12 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int y)
{
	char	c;

	if (n == 2147483647)
		return (ft_putstr("2147483647"));
	else if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (n < 0)
	{
		write(1, "-", 1);
		y = ft_putnbr(-n, y++);
	}
	else if (n >= 10)
	{
		y = ft_putnbr(n / 10, y++);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (n % 10) + '0';
		ft_putchar(c);
	}
	return (++y);
}

int	ft_putnbr_u(unsigned int n, int y)
{
	char	c;

	if (n == 2147483647)
		return (ft_putstr("2147483647"));
	else if (n < 0)
	{
		write(1, "-", 1);
		y = ft_putnbr(-n, y++);
	}
	else if (n >= 10)
	{
		y = ft_putnbr(n / 10, y++);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (n % 10) + '0';
		ft_putchar(c);
	}
	return (++y);
}
