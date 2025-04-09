/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:29:23 by mael-gho          #+#    #+#             */
/*   Updated: 2025/01/11 17:29:23 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_up(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 16)
	{
		len += ft_puthexa_up(nb / 16);
		nb = nb % 16;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
		len++;
	}
	if (nb > 9 && nb < 16)
	{
		ft_putchar(nb + 55);
		len++;
	}
	return (len);
}
