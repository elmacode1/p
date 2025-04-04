#include "../pushswap.h"

void    swap(t_list **head)
{
        int content;
        int index;
        t_list *new;

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

void    sa(t_list **lst)
{
        swap(lst);
        write(1,"sa",2);
}
void    sb(t_list **lst)
{
        swap(lst);
        write(1,"sb",2);
}
void    ss(t_list **stack_a, t_list **stack_b)
{
        swap(stack_a);
        swap(stack_b);
        write(1,"ss",2);
}
int main()
{
        t_list *head=NULL;
        t_list *tmp;
        int tab[5]={1,-8,0,12,7};
        ft_lstadd_back(&head,lstnew(tab[0]));
        ft_lstadd_back(&head,lstnew(tab[1]));
        ft_lstadd_back(&head,lstnew(tab[2]));
        ft_lstadd_back(&head,lstnew(tab[3]));
        tmp=head;

        sb(&head);
        int *ptr;
        test(ptr);
        
}