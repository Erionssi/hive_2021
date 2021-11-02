# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 10:46:49 by jturunen          #+#    #+#              #
#    Updated: 2021/11/02 13:43:48 by jturunen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_display_file
OBJ := ft_display_file.o
RM := /bin/rm -f
SRCS := ft_display_file.c
COPT := -c -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(COPT) $(SRCS)
	gcc -o $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all
