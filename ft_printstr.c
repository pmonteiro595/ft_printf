/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteixeir <pteixeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:30:15 by pteixeir          #+#    #+#             */
/*   Updated: 2024/12/17 19:45:18 by pteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(va_list args, int *final_return)
{
	int		i;
	char	*s;

	i = 0;
	s = va_arg(args, char *);
	if (s == NULL)
	{
		write (1, "(null)", 6);
		*final_return = *final_return + 6;
		return ;
	}
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	*final_return = *final_return + i;
}
