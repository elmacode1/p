/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:54:52 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 13:53:46 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	digits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || ((str[i] >= 9 && str[i] <= 13) && str[i]))
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (0);
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9' && str[i])
			i++;
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == ' ') && str[i])
			return (0);
		if (!str[i])
			break ;
		i++;
	}
	return (1);
}

int	ft_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] == ' ' || ((s[i] >= 9 && s[i] <= 13))))
			return (1);
		i++;
	}
	return (0);
}

char	*fill_array(char **av, int ac)
{
	int		i;
	char	*tmp;
	char	*result;

	i = 2;
	tmp = NULL;
	result = ft_strdup(av[1]);
	if (!result)
		exit(1);
	while (ac > i)
	{
		if (!ft_strcmp(av[i], "") || !ft_space(av[i]))
		{
			free(result);
			ft_printerror();
		}
		tmp = ft_strjoin(result, " ");
		free(result);
		result = tmp;
		tmp = ft_strjoin(result, av[i]);
		free(result);
		result = tmp;
		i++;
	}
	return result;
}

void	main2(char **av, int ac, t_list *stack_a)
{
	t_list	*stack_b;
	int		*ptr;
	char *result;
	
	stack_b = NULL;
	result = fill_array(av, ac);
	ptr = ctoi(result);
	if (!check_double(ptr, countdigits(result)))
	{
		free(ptr);
		free(result);
		ft_printerror();
	}
	stack_a = fill(ptr, countdigits(result));
	sort_int_tab(ptr, countdigits(result));
	indexing(&stack_a, ptr);
	process(&stack_a, &stack_b);
	free_list(stack_a);
	free(ptr);
	free(result);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*stack_a;

	i = 1;
	stack_a = NULL;
	if (ac > 1)
	{
		while (ac > i)
		{
			if (digits(av[i]) == 0)
			{
				ft_printerror();
			}
			i++;
		}
		main2(av, ac, stack_a);
	}
}
