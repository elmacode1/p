#include"../pushswap.h"

void    sort3(t_list **stack)
{
    t_list *first;
    t_list *last;

    first = *stack;
    last = lstlast(*stack);

    if (is_sorted(*stack)) 
        return;
    if(last->content == max(stack))
    {
        if(first->content != min(stack))
            sa(stack);
    }
    else if(last->content == min(stack))
    {
        if(first->content == max(stack))
            sa(stack);
        rra(stack);
    }
    else
    {
        if(first->content == min(stack))
            sa(stack);
        ra(stack);
    }
}

  

