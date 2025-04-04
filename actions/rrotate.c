#include "../pushswap.h"

void    rrotate(t_list **stack){
        t_list *tmp;
        t_list *last;

        tmp  = *stack;
        last = lstlast(*stack);
        while(tmp->next->next)
        {
                tmp = tmp->next;
        }
        tmp->next = NULL;
        last->next = *stack;
        *stack = last;
}
void    rra(t_list **stack_a)
{
        rrotate(stack_a);
        write(1,"rra",3);
}
void    rrb(t_list **stack_b)
{
        rrotate(stack_b);
        write(1,"rrb",3);
}
void    rrr(t_list **stack_a, t_list **stack_b)
{
        rrotate(stack_a);
        rrotate(stack_b);
        write(1,"rrr",3);
}