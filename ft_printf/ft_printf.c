/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:29:03 by mael-gho          #+#    #+#             */
/*   Updated: 2025/01/15 15:48:06 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_puthexa_low(va_arg(args, int));
	else if (c == 'X')
		len += ft_puthexa_up(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		len += ft_putnbr_add(va_arg(args, void *));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			len += ft_putchar(format[i]);
		else if (format[i] == '%' && format[i + 1])
		{
			i++;
			len += ft_check(args, format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
