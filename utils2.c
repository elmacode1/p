/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:57:32 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 13:02:48 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	countdigits(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (!((str[i] >= '0' && str[i] <= '9')) && str[i])
			i++;
		while (str[i] >= '0' && str[i] <= '9' && str[i])
			i++;
		i--;
		if (str[i] >= '0' && str[i] <= '9' && str[i])
			count++;
		i++;
	}
	return (count);
}

void	check_overflow(int sign, long result, char c)
{
	if ((sign == 1 && (result * 10 + (c - '0')) > INT_MAX)
		|| (sign == -1 && -(result * 10 + (c - '0')) < INT_MIN))
	{
		ft_printf("Error");
		exit(1);
	}
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || ((str[i] >= 9 && str[i] <= 13) && str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		check_overflow(sign, result, str[i]);
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return ((int)result * sign);
}

int	*ctoi(char *s)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = malloc((sizeof(int)) * countdigits(s));
	while (s[i])
	{
		tab[j] = ft_atoi(&s[i]);
		j++;
		while ((s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)) && s[i])
			i++;
		while (((s[i] >= '0' && s[i] <= '9') || (s[i] == '-' || s[i] == '+'))
			&& s[i])
			i++;
	}
	return (tab);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
