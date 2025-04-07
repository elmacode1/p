#include "../pushswap.h"

void    rotate(t_list **stack)
{
        t_list *tmp;
        t_list *last;

        tmp = (*stack)->next;
        last = lstlast(*stack);
        last->next = *stack;
        (*stack)->next = NULL;
        *stack = tmp;
}
void    ra(t_list **stack_a)
{
        rotate(stack_a);
        write(1,"ra\n",3);
}
void    rb(t_list **stack_b)
{
        rotate(stack_b);
        write(1,"rb\n",3);
}
void    rr(t_list **stack_a, t_list **stack_b)
{
        rotate(stack_a);
        rotate(stack_b);
        write(1,"rr\n",3);
}
// int main()
// {
//         t_list *head=NULL;
//         t_list *tmp;
//         int tab[5]={1,-8,0,12};
//         ft_lstadd_back(&head,lstnew(tab[0]));
//         ft_lstadd_back(&head,lstnew(tab[1]));
//         ft_lstadd_back(&head,lstnew(tab[2]));
//         ft_lstadd_back(&head,lstnew(tab[3]));
//         tmp=head;
//         while(tmp){
//                 printf("%d,", tmp->content);
//                 tmp = tmp->next;
//         }
        
//         rotate(&head);
//         printf("\n");
//         tmp = head;

//          while(tmp){
//                 printf("%d,", tmp->content);
//                 tmp = tmp->next;
//         }
        
// }