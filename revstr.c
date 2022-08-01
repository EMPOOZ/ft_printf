/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:13:19 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/18 19:13:23 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	revstr(char *str1)
{
	int	i;
	int	len;
	int	temp;

	len = ft_strlen(str1);
	i = 0;
	while (i < len / 2)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
		i++;
	}
	ft_putstr(str1);
	return (len);
}
