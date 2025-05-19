# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 17:58:12 by frocha-b          #+#    #+#              #
#    Updated: 2025/04/07 17:40:02 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
INC = ./includes
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = $(SRCS:.c=.o)

all:$(NAME) 

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
