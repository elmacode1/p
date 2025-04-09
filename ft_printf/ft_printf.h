/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 17:29:15 by mael-gho          #+#    #+#             */
/*   Updated: 2025/01/11 17:29:15 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_puthexa_up(unsigned int nb);
int	ft_putnbr_add(void *n);
int	ft_puthexa_low(unsigned int nb);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_printf(const char *format, ...);
int	ft_putnbr_unsigned(unsigned int n);

#endif