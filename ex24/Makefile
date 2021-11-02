# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 10:46:49 by jturunen          #+#    #+#              #
#    Updated: 2021/11/02 11:02:09 by jturunen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
OBJ := ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADIR := includes
RM := /bin/rm -f
SRCS := ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
./srcs/ft_strlen.c ./srcs/ft_swap.c
COPT := -c -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -I $(HEADIR) $(COPT) $(SRCS)
	ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
