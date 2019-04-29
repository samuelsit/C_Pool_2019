# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/25 14:50:35 by ssitruk           #+#    #+#              #
#    Updated: 2019/02/25 20:08:09 by ssitruk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = srcs/ft_putchar.c \
		 srcs/ft_putstr.c \
		 srcs/ft_strcmp.c \
		 srcs/ft_strlen.c \
		 srcs/ft_swap.c

NAME    = libft.a

RM      = rm -f

OBJ     = ft_putchar.o \
		  ft_putstr.o \
		  ft_strcmp.o \
		  ft_strlen.o \
		  ft_swap.o

CC      = gcc

FLAGS   = -c -Wall -Wextra -Werror

INCLUDES	= -I includes/

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all
