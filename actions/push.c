/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:53:16 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 12:53:22 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	push(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = (*stack_a)->next;
	if (!*stack_a)
		return (0);
	if (!*stack_b)
	{
		*stack_b = *stack_a;
		(*stack_b)->next = NULL;
	}
	else
	{
		(*stack_a)->next = *stack_b;
		*stack_b = *stack_a;
	}
	*stack_a = tmp;
	return (1);
}

void	pa(t_list **a, t_list **b)
{
	if (push(b, a) == 1)
		write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	if (push(a, b) == 1)
		write(1, "pb\n", 3);
}
