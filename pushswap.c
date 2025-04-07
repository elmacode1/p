#include"pushswap.h"

int countdigits (char *str){
        int i=0;
        int count=0;
        while(str[i]){
                while(!((str[i]>='0' && str[i]<='9'))&&str[i])
                        i++;
                while(str[i]>='0' && str[i]<='9' && str[i])
                        i++;
                i--;
                if(str[i]>='0' && str[i]<='9' && str[i])
                        count++;
                i++;
        }
        return count;
}
int ft_atoi(char *str){
        int i=0;
        int sign=1;
        int result=0;
        while (str[i] == ' ' || ((str[i] >= 9 && str[i] <= 13) && str[i]))
		        i++;
        if (str[i]=='-'  || str[i]=='+'){
                if (str[i]=='-'){
                        sign*=-1;
                        i++;
                }
        } 
        while (str[i]>='0' && str[i]<='9' && str[i]){
                result *= 10;
                result+= (str[i] - '0');           
                i++;
        }
        return result*sign;
}
int *ctoi (char *s){
        int *tab;
        int i=0;
        int j=0;
        tab = malloc((sizeof(int))*countdigits(s));
        while(s[i]){
                tab[j]=ft_atoi(&s[i]);
                j++;
                while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)&& s[i])
                        i++;
                while( (s[i]>='0'&&s[i]<='9') || (s[i]=='-' || s[i]=='+') && s[i])
                i++;
        }
        return tab;
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int digits(char *str){
        int i=0;
        while(str[i]){
                while (str[i] == ' ' || ((str[i] >= 9 && str[i] <= 13) && str[i]))
		        i++;
                if(str[i]=='+' || str[i]=='-')
                        i++;
                while(str[i]>='0'&&str[i]<='9' && str[i])
                        i++;
                if(!((str[i]>='0'&&str[i]<='9') || str[i]==' ')  && str[i])
                        return 0;
                if(!str[i])
                        break;        
                i++;
        }
        return 1;
}
t_list *fill(int *tab,int size)
{
        t_list *head;
        int i;

        head = NULL;
        i = 0;
        while(i < size)
        {
               ft_lstadd_back(&head,lstnew(tab[i]));
               i++;
        }
        return head;
}
int check_double(int *tab,int size)
{
        int i = 0;
        int j = 0;
        while(i < size)
        {
                j = i + 1;
                while(j < size)
                {
                        if(tab[i]==tab[j])
                                return 0;
                        j++;        
                }
                i++;
        }
        return 1;

}
void    process(t_list *stack_a,t_list *stack_b)
{
        if(lstsize(stack_a) == 2)
                sort2(&stack_a);
        else if(lstsize(stack_a) == 3)
                sort3(&stack_a);
        else if(lstsize(stack_a) == 4)
                sort4(&stack_a, &stack_b);
        else if(lstsize(stack_a) == 5)
                sort5(&stack_a, &stack_b);
        else if(lstsize(stack_a) > 5){
                if (lstsize(stack_a) < 250){
                
                        push_to_b(&stack_a, &stack_b, 15);
                }else
                        push_to_b(&stack_a, &stack_b, 40);
        }
}
void indexing(t_list **stack_a, int *tab)
{
        int i;
        t_list *head;

        i = 0;
        head = *stack_a;
        while(head)
        {
                i = 0;
                while(i < lstsize(*stack_a))
                {
                        if(head->content == tab[i])
                        {
                                head->index = i;
                                break;
                        }
                        i++;
                }
                head = head->next;
        }

}

void    sort_int_tab(int *tab,int size)
{
        int i;
        int j;
        int tmp;

        i = 0;
        j = 0;
        tmp = 0;
        while(j < size)
        {
                i=0;
                while(i < size - 1)
                {
                        if(tab[i] > tab[i + 1])
                        {
                                tmp = tab[i];
                                tab[i] = tab[i + 1];
                                tab[i + 1] = tmp;
                        }
                        i++;
                }
                j++;
        }
}
int main(int ac,char **av){
       int i=1;
       char *result;
       int *ptr;
       t_list *stack_a;
       t_list *stack_b;

       stack_b= NULL;
       if (ac > 1){
        while (ac  > i){
                if (digits(av[i])== 0){
                       printf("Error");
                       return 0;
                }
                i++;
        }
        result=av[1];
        i = 2;
        while(ac > i){
                result = ft_strjoin(result," ");
                result = ft_strjoin(result,av[i]);
                i++;
        }
        ptr = ctoi(result);
        if(!check_double(ptr,countdigits(result)))
        {
                printf("doubles");
                exit(1);
        }
        stack_a = fill(ptr,countdigits(result));
        write(1,"wseel",5);
        sort_int_tab(ptr,countdigits(result));
        write(1,"wseel",5);
        indexing(&stack_a, ptr);
//        t_list *tmp=stack_a;
//         while(tmp)
//         {
//                 printf("content:%d,index:%d\n",tmp->content,tmp->index);
//                 tmp=tmp->next;
//         }
write(1,"wseel",5);
        process(stack_a,stack_b);
       }
}

