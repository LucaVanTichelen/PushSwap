# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 07:57:27 by lvan-tic          #+#    #+#              #
#    Updated: 2022/02/01 16:10:05 by lvan-tic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SRCS		=	check_input.c		\
				convert.c			\
				find_median.c		\
				ft_putchar.c		\
				push_swap.c			\
				push.c				\
				quick_sort_utils.c	\
				quick_sort.c		\
				reverse_rotate.c	\
				rotate.c			\
				sort_array.c		\
				swap.c

OBJS	=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	@$(CC) -o $(NAME) $(OBJS)

clean		:
	@$(RM) $(OBJS)

fclean		:	clean
	@$(RM) $(NAME)

re			:	fclean all