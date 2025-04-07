#include"../pushswap.h"

void    sort2(t_list **stack)
{
    t_list *current;

    current = *stack;
    if(current->content == max(stack))
        sa(stack);
}
