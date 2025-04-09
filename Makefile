# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 10:44:57 by tassadin          #+#    #+#              #
#    Updated: 2025/04/09 12:58:41 by mael-gho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = actions/rotate.c actions/rrotate.c actions/push.c actions/swap.c\
	sorting/sort.c algo.c linkedlist_utils.c pushswap.c sorting_utils.c\
	utils.c utils2.c utils3.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C ft_printf
	$(CC) $(CFLAGS) $(OBJS) ft_printf/libftprintf.a -o $(NAME)

clean:
	@make clean -C ft_printf
	rm -f $(OBJS)

fclean: clean
	@make fclean -C ft_printf
	rm -f $(NAME)

re: fclean all