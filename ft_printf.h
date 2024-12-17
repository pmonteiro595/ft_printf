/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteixeir <pteixeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:26:41 by pteixeir          #+#    #+#             */
/*   Updated: 2024/12/17 19:45:25 by pteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *final_return);
void	ft_printchar(va_list args, int *final_return);
void	ft_printdigits(va_list args, int *final_return);
void	ft_printstr(va_list args, int *final_return);
void	ft_printptr(va_list args, int *final_return);
void	ft_printunsigned(va_list args, int *final_return);
void	ft_printhex(va_list args, char format, int *final_return);

#endif
