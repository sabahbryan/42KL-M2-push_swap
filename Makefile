# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 16:50:17 by bryaloo           #+#    #+#              #
#    Updated: 2024/09/05 16:50:19 by bryaloo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS 	=

LIBFT_DIR = libft

LIBFT	= ${LIBFT_DIR}/libft.a

OBJS	=

INCLUDES	= -I ./ -I ${LIBFT_DIR}

AR	= ar rcs

RM	= rm -f

GCC	= gcc

CFLAGS	= -Wall -Werror -Wextra

all: 
bonus: 

${LIBFT}:
	make -C ${LIBFT_DIR}

#${CLIENT}: ${OBJS_CLIENT} ${LIBFT}
#	${GCC} ${CFLAGS} ${OBJS_CLIENT} ${LIBFT} -o ${CLIENT}

%.o: %.c
	${GCC} ${CFLAGS} ${INCLUDES} -c $< -o $@

clean:
	${RM} 
	make -C ${LIBFT_DIR} clean

fclean:	clean
	${RM} 
	make -C ${LIBFT_DIR} clean

re:	fclean all

.PHONY:	all clean fclean re

