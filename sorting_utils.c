#include"pushswap.h"

int max(t_list **head)
{
    t_list *current;
    int max;

    current = *head;
    max = current->content;
    while(current)
    {
        if(max < current->content)
            max = current->content;
        current = current->next;
    }
    return (max);
}
int min(t_list **head)
{
    t_list *current;
    int min;

    current = *head;
    min = current->content;
    while(current)
    {
        if(min > current->content)
            min = current->content;
        current = current->next;
    }
    return (min);
}

int is_sorted(t_list *stack)
{
    while(stack && stack->next)
    {
        if(stack->content > stack->next->content)
            return 0;
        stack = stack->next;
    }
    return 1;
}
int get_position(t_list *stack, int value)
{
    int index;

    index = 0;
    while(stack)
    {
        if(stack->content == value)
            return (index);
        stack = stack->next;
        index++;
    }
    return (-1);
}
