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
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list  *lstlast(t_list *head);
t_list  *lstnew(int content);
#endif