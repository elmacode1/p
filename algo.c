/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:47:30 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 13:52:48 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_printerror()
{
	ft_printf("Error");
	exit(1);
}

size_t	get_highest_pst(t_list *stack, int i)
{
	t_list	*tmp;
	size_t	j;

	tmp = stack;
	j = 0;
	while (tmp)
	{
		if (tmp->content == i)
			break ;
		j++;
		tmp = tmp->next;
	}
	return (j);
}

size_t	get_idx_pst(t_list *stack, int val)
{
	t_list	*tmp;
	size_t	j;

	tmp = stack;
	j = 0;
	while (tmp)
	{
		if (tmp->index < val)
			break ;
		j++;
		tmp = tmp->next;
	}
	return (j);
}

void	push_to_b(t_list **stackA, t_list **stackB, int p)
{
	int	i;
	int	size;

	i = 0;
	size = lstsize(*stackA);
	while (i < size)
	{
		if ((*stackA)->index <= i)
		{
			pb(stackA, stackB);
			rb(stackB);
			i++;
		}
		else if ((*stackA)->index <= (i + p))
		{
			pb(stackA, stackB);
			i++;
		}
		else if (get_idx_pst(*stackA, (i + p)) < lstsize(*stackA) / 2)
			ra(stackA);
		else
			rra(stackA);
	}
	push_to_a(stackA, stackB);
}

void	push_to_a(t_list **stackA, t_list **stackB)
{
	int		highest;
	size_t	position;

	highest = max(stackB);
	position = get_highest_pst(*stackB, highest);
	while (lstsize(*stackB) > 0)
	{
		if (highest == (*stackB)->content)
		{
			pa(stackA, stackB);
			if (lstsize(*stackB) > 0)
			{
				highest = max(stackB);
				position = get_highest_pst(*stackB, highest);
			}
		}
		else
		{
			if (position <= (lstsize(*stackB) / 2)
				&& highest != (*stackB)->content)
				rb(stackB);
			else
				rrb(stackB);
		}
	}
}
