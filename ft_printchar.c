/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteixeir <pteixeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:25:03 by pteixeir          #+#    #+#             */
/*   Updated: 2024/12/17 19:25:43 by pteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(va_list args, int *final_return)
{
	char	c;

	c = va_arg(args, int);
	write (1, &c, 1);
	*final_return = *final_return + 1;
}
