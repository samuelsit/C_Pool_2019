# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/25 19:28:50 by ssitruk           #+#    #+#              #
#    Updated: 2019/02/26 00:39:43 by ssitruk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = srcs/ft_putchar.c \
		  srcs/do_op.c \
		  srcs/ft_putstr.c \
		  srcs/ft_putnbr.c \
		  srcs/ft_atoi.c \
		  srcs/ft_strlen.c \
		  srcs/operation.c \
		  srcs/check_nb.c

NAME    = do-op

RM      = rm -f

OBJ		= $(SRC:.c=.o)

CC      = gcc

FLAGS   = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all
