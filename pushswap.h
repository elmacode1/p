#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list{
        int index;
        int content;
        struct s_list *next;
} t_list;

char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list  *lstlast(t_list *head);
t_list  *lstnew(int content);
size_t  lstsize(t_list *head);

int max(t_list **head);
int min(t_list **head);
int get_position(t_list *stack, int value);
int is_sorted(t_list *stack);

void    sort2(t_list **stack);
void    sort3(t_list **stack);
void    sort4(t_list **stack_a, t_list **stack_b);
void    sort5(t_list **stack_a, t_list **stack_b);

void    swap(t_list **head);
void    sa(t_list **head);
void    sb(t_list **head);
void    ss(t_list **stack_a, t_list **stack_b);
void    rotate(t_list **stack);
void    ra(t_list **stack);
void    rb(t_list **stack);
void    rr(t_list **stack_a, t_list **stack_b);
void    rrotate(t_list **stack);
void    rra(t_list **stack);
void    rrb(t_list **stack);
void    rrr(t_list **stack_a, t_list **stack_b);
int    push(t_list **stack_a, t_list **stack_b);
void    pa(t_list **a, t_list **b);
void    pb(t_list **a, t_list **b);


int	get_highest_pst(t_list *stack, int i);
int	get_idx_pst(t_list *stack, int i);
void	push_to_b(t_list **stackA, t_list **stackB, int p);
void	push_to_a(t_list **stackA, t_list **stackB);

#endif