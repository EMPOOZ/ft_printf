/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:43:46 by tconwy            #+#    #+#             */
/*   Updated: 2021/10/21 16:56:17 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *p);
int		string_conw(unsigned int y);
int		string_conw1(unsigned int y);
int		string_conw2(void *y);
int		ft_printf(const char *string, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n, int y);
int		revstr(char *str1);
int		ft_putnbr_u(unsigned int n, int y);

#endif