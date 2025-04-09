/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:50:54 by mael-gho          #+#    #+#             */
/*   Updated: 2025/04/09 13:53:09 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "ft_printf/ft_printf.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
}					t_list;

void				ft_printerror();
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *s);
int					*ctoi(char *s);
void				process(t_list **stack_a, t_list **stack_b);
void				indexing(t_list **stack_a, int *tab);
void				sort_int_tab(int *tab, int size);
int					check_double(int *tab, int size);
int					countdigits(char *str);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*lstlast(t_list *head);
t_list				*lstnew(int content);
size_t				lstsize(t_list *head);
t_list				*fill(int *tab, int size);
void				free_list(t_list *lst);

int					max(t_list **head);
int					min(t_list **head);
int					get_position(t_list *stack, int value);
int					is_sorted(t_list *stack);

void				sort2(t_list **stack);
void				sort3(t_list **stack);
void				sort4(t_list **stack_a, t_list **stack_b);
void				sort5(t_list **stack_a, t_list **stack_b);

void				swap(t_list **head);
void				sa(t_list **head);
void				sb(t_list **head);
void				ss(t_list **stack_a, t_list **stack_b);
void				rotate(t_list **stack);
void				ra(t_list **stack);
void				rb(t_list **stack);
void				rr(t_list **stack_a, t_list **stack_b);
void				rrotate(t_list **stack);
void				rra(t_list **stack);
void				rrb(t_list **stack);
void				rrr(t_list **stack_a, t_list **stack_b);
int					push(t_list **stack_a, t_list **stack_b);
void				pa(t_list **a, t_list **b);
void				pb(t_list **a, t_list **b);

int					ft_strcmp(char *s1, char *s2);
size_t				get_highest_pst(t_list *stack, int i);
size_t				get_idx_pst(t_list *stack, int i);
void				push_to_b(t_list **stackA, t_list **stackB, int p);
void				push_to_a(t_list **stackA, t_list **stackB);

#endif