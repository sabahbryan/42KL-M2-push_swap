# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 16:50:17 by bryaloo           #+#    #+#              #
#    Updated: 2025/02/16 22:11:47 by bryaloo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
NAME	= push_swap

# SOURCE FILES
SRCS 	= $(wildcard *.c)

# LIBFT
LIBFT_DIR	= libft
LIBFT		= ${LIBFT_DIR}/libft.a

# OBJECTS
OBJS	= $(SRCS:.c=.o)

# INCLUDES
INCLUDES	= -I ./ -I ${LIBFT_DIR}

# COMPILERS & FLAGS
AR		= ar rcs
RM		= rm -f
GCC		= gcc
CFLAGS	= -Wall -Werror -Wextra

# MAKE & BUILD
all: ${LIBFT} ${NAME}

${NAME}: ${OBJS}
	${GCC} ${CFLAGS} ${INCLUDES} ${OBJS} ${LIBFT} -o ${NAME}

bonus: all

${LIBFT}:
	make -C ${LIBFT_DIR}

%.o: %.c
	${GCC} ${CFLAGS} ${INCLUDES} -c $< -o $@

# CLEANING
clean:
	${RM} ${OBJS}
	make -C ${LIBFT_DIR} clean

fclean:	clean
	${RM} ${NAME}
	make -C ${LIBFT_DIR} clean

re:	fclean all

.PHONY:	all clean fclean re

