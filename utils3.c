/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:59:25 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 12:59:40 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*fill(int *tab, int size)
{
	t_list	*head;
	int		i;

	head = NULL;
	i = 0;
	while (i < size)
	{
		ft_lstadd_back(&head, lstnew(tab[i]));
		i++;
	}
	return (head);
}

int	check_double(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	process(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a))
	{
		return ;
	}
	if (lstsize(*stack_a) == 2)
		sort2(stack_a);
	else if (lstsize(*stack_a) == 3)
		sort3(stack_a);
	else if (lstsize(*stack_a) == 4)
		sort4(stack_a, stack_b);
	else if (lstsize(*stack_a) == 5)
		sort5(stack_a, stack_b);
	else if (lstsize(*stack_a) > 5)
	{
		if (lstsize(*stack_a) < 250)
		{
			push_to_b(stack_a, stack_b, 15);
		}
		else
			push_to_b(stack_a, stack_b, 40);
	}
}

void	indexing(t_list **stack_a, int *tab)
{
	size_t	i;
	t_list	*head;

	i = 0;
	head = *stack_a;
	while (head)
	{
		i = 0;
		while (i < lstsize(*stack_a))
		{
			if (head->content == tab[i])
			{
				head->index = i;
				break ;
			}
			i++;
		}
		head = head->next;
	}
}

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}
