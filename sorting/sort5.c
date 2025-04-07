#include"../pushswap.h"

void    sort5(t_list **stack_a, t_list **stack_b)
{
    if(is_sorted(*stack_a) == 1)
        return ;
    while((*stack_a)->content != min(stack_a))
    {
        if(get_position(*stack_a,min(stack_a)) <= 2)
            ra(stack_a);
        else
            rra(stack_a);
    }
    pb(stack_a, stack_b);
    sort4(stack_a,stack_b);
    pa(stack_a, stack_b);
}