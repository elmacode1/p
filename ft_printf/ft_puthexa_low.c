/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:29:21 by mael-gho          #+#    #+#             */
/*   Updated: 2025/01/12 03:00:48 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_low(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 16)
	{
		len += ft_puthexa_low(nb / 16);
		nb = nb % 16;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
		len++;
	}
	if (nb > 9 && nb <= 16)
	{
		ft_putchar(nb + 87);
		len++;
	}
	return (len);
}
