/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:43:57 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/21 16:56:57 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*malloc1(unsigned long long p)
{
	int		i;
	char	*t;

	i = 0;
	while (p != 0)
	{
		p /= 16;
		i++;
	}
	t = malloc(sizeof(char) * (i + 1));
	if (!t)
		return (0);
	return (t);
}

int	qq(char *num, unsigned long long u)
{
	int	i;

	i = 0;
	while (u != 0)
	{
		if (u % 16 < 10)
			num[i] = (u % 16) + '0';
		else
			num[i] = ((u % 16) - 10) + 'a';
		u /= 16;
		i++;
	}
	return (i);
}

int	string_conw(unsigned int y)
{
	int		i;
	char	*num;

	i = 0;
	if (y == 0)
	{
		ft_putstr("0");
		return (1);
	}
	num = malloc1(y);
	if (!num)
		return (0);
	while (y != 0)
	{
		if (y % 16 < 10)
			num[i] = (y % 16) + '0';
		else
			num[i] = ((y % 16) - 10) + 'A';
		y /= 16;
		i++;
	}
	num[i] = '\0';
	i = revstr(num);
	free (num);
	return (i);
}

int	string_conw1(unsigned int y)
{
	int		i;
	char	*num;

	i = 0;
	if (y == 0)
	{
		ft_putstr("0");
		return (1);
	}
	num = malloc1(y);
	if (!num)
		return (0);
	i = qq(num, y);
	num[i] = '\0';
	i = revstr(num);
	free (num);
	return (i);
}

int	string_conw2(void *y)
{
	int					i;
	char				*num;
	unsigned long long	u;

	u = (unsigned long long)y;
	i = 0;
	if (!y)
	{
		ft_putstr("0x0");
		return (3);
	}
	num = malloc1(u);
	if (!num)
		return (0);
	i = qq(num, u);
	ft_putstr("0x");
	num[i] = '\0';
	i = revstr(num);
	free (num);
	return (i + 2);
}
