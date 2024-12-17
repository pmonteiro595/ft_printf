/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteixeir <pteixeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:28:52 by pteixeir          #+#    #+#             */
/*   Updated: 2024/12/17 19:29:00 by pteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printupper(unsigned int hex, int *final_return);
static void	ft_printlower(unsigned int hex, int *final_return);

static void	ft_printupper(unsigned int hex, int *final_return)
{
	char	*x;
	int		module;

	x = "0123456789ABCDEF";
	if (hex >= 16)
		ft_printupper(hex / 16, final_return);
	module = hex % 16;
	write(1, &x[module], 1);
	*final_return = *final_return + 1;
}

static void	ft_printlower(unsigned int hex, int *final_return)
{
	char	*x;
	int		module;

	x = "0123456789abcdef";
	if (hex >= 16)
		ft_printlower(hex / 16, final_return);
	module = hex % 16;
	write(1, &x[module], 1);
	*final_return = *final_return + 1;
}

void	ft_printhex(va_list args, char format, int *final_return)
{
	unsigned int	hex;

	hex = va_arg(args, unsigned int);
	if (format == 'x')
		ft_printlower(hex, final_return);
	if (format == 'X')
		ft_printupper(hex, final_return);
}
