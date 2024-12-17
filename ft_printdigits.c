#include "ft_printf.h"

static void	ft_putnbr(int nb, int *final_return);

void	ft_printdigits(va_list args, int *final_return)
{
	int	d;

	d = va_arg(args, int);
	ft_putnbr(d, final_return);
}

static void	ft_putnbr(int d, int *final_return)
{
	if (d == -2147483648)
	{
		write (1, "-2147483648", 11);
		*final_return = *final_return + 11;
		return ;
	}
	if (d < 0)
	{
		d = d * -1;
		ft_putchar ('-', final_return);
	}
	if (d >= 10)
		ft_putnbr(d / 10, final_return);
	ft_putchar(d % 10 + '0', final_return);
}
