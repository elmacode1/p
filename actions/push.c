#include "../pushswap.h"
int    push(t_list **stack_a, t_list **stack_b)
{
        t_list *tmp;
        tmp = (*stack_a)->next;

        if(!*stack_a)
                return 0;
        if(!*stack_b)
        {
                *stack_b = *stack_a;
        }
        else{
                (*stack_a)->next = *stack_b;
                *stack_b = *stack_a;
        }
        *stack_a = tmp;
        return 1;
}
void    pa(t_list **a, t_list **b)
{
        if(push(b,a)==1)
                write(1,"pa",2);
}
void    pb(t_list **a, t_list **b)
{
        if(push(a,b)==1)
        write(1,"pb",2);
}

