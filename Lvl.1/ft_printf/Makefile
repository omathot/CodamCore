# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omathot <omathot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 23:06:58 by oscarmathot       #+#    #+#              #
#    Updated: 2022/12/21 11:09:40 by omathot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_hexa_utils.c ft_pointer.c ft_printf.c ft_unsigned.c ft_utils.c ft_utils_2.c ft_utils_3.c
OBJ = $(SRC:.c=.o)
CMP = gcc
FLAGS = -Werror -Wall -Wextra -I 

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $@ $^

ft_%.o: ft_%.c
	$(CMP) $(FLAGS) ft_printf.h -c $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY = re fclean clean all
