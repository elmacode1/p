/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:53:58 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 12:54:03 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rrotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack;
	last = lstlast(*stack);
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_list **stack_a)
{
	rrotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	rrotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rrotate(stack_a);
	rrotate(stack_b);
	write(1, "rrr\n", 4);
}
