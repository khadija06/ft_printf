# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 16:13:27 by knabeel           #+#    #+#              #
#    Updated: 2022/09/07 16:52:07 by knabeel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
cc = gcc
CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_print_char.c ft_print_decnumbers.c ft_print_hex.c ft_print_percentge.c ft_print_pointer.c ft_print_string.c ft_print_unsignednum.c ft_printf.c

OBJS = $(SRCS:.c=.o)

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}
all:	${NAME}
clean:
		${RM} ${OBJS} ${OBJSBONUS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all