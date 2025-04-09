/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:54:08 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 12:54:22 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	swap(t_list **head)
{
	int		content;
	int		index;
	t_list	*new;

	content = 0;
	index = 0;
	new = (*head)->next;
	content = (*head)->content;
	(*head)->content = new->content;
	new->content = content;
	index = (*head)->index;
	(*head)->index = new->index;
	new->index = index;
}

void	sa(t_list **lst)
{
	swap(lst);
	write(1, "sa\n", 3);
}

void	sb(t_list **lst)
{
	swap(lst);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
