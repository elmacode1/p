/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:52:27 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 12:52:31 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sort2(t_list **stack)
{
	t_list	*current;

	current = *stack;
	if (current->content == max(stack))
		sa(stack);
}

void	sort3(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	last = lstlast(*stack);
	if (is_sorted(*stack))
		return ;
	if (last->content == max(stack))
	{
		if (first->content != min(stack))
			sa(stack);
	}
	else if (last->content == min(stack))
	{
		if (first->content == max(stack))
			sa(stack);
		rra(stack);
	}
	else
	{
		if (first->content == min(stack))
			sa(stack);
		ra(stack);
	}
}

void	sort4(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a) == 1)
		return ;
	while ((*stack_a)->content != min(stack_a))
	{
		if (get_position(*stack_a, min(stack_a)) <= 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	sort5(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a) == 1)
		return ;
	while ((*stack_a)->content != min(stack_a))
	{
		if (get_position(*stack_a, min(stack_a)) <= 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
