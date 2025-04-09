/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:29:27 by mael-gho          #+#    #+#             */
/*   Updated: 2025/01/11 18:33:35 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_add(void *n)
{
	int	len;

	len = 0;
	len = ft_putstr("0x");
	len += ft_puthexa_low((unsigned long)n);
	return (len);
}
