/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:42:16 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/22 10:25:42 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	print(char p, va_list vl)
{
	int	q;

	q = 0;
	if (p == 'd')
		q = ft_putnbr(va_arg(vl, int), 0);
	else if (p == 's')
		q = ft_putstr(va_arg(vl, char *));
	else if (p == 'c')
		q = ft_putchar(va_arg(vl, int));
	else if (p == 'i')
		q = ft_putnbr(va_arg(vl, int), 0);
	else if (p == 'u')
		q = ft_putnbr_u(va_arg(vl, unsigned int), 0);
	else if (p == '%')
	{
		write (1, "%%", 1);
		q = 1;
	}
	else if (p == 'x')
		q = string_conw1(va_arg(vl, unsigned int));
	else if (p == 'X')
		q = string_conw(va_arg(vl, unsigned int));
	else if (p == 'p')
		q = string_conw2(va_arg(vl, void *));
	return (q);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	va_list	vl;
	char	*p;
	int		q;

	q = 0;
	p = (char *)string;
	va_start (vl, string);
	i = 0;
	while (p[i])
	{
		if (p[i] != '%')
			q += ft_putchar(p[i]);
		else
			q += print (p[++i], vl);
		i++;
	}
	return (q);
}
