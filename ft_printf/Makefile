NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f



SRC = ft_printf.c  ft_putchar.c  ft_putnbr.c  ft_putstr.c ft_putnbr_add.c ft_puthexa_low.c ft_puthexa_up.c ft_putnbr_unsigned.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)
 
$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all