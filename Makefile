# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 16:50:17 by bryaloo           #+#    #+#              #
#    Updated: 2024/10/15 20:49:42 by bryaloo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
NAME	= push_swap

# SOURCE FILES
SRCS 	=

# LIBFT
LIBFT_DIR	= libft
LIBFT		= ${LIBFT_DIR}/libft.a

# OBJECTS
OBJS	=

# INCLUDES
INCLUDES	= -I ./ -I ${LIBFT_DIR}

# COMPILERS & FLAGS
AR		= ar rcs
RM		= rm -f
GCC		= gcc
CFLAGS	= -Wall -Werror -Wextra

# MAKE & BUILD
all: 
bonus: 

${LIBFT}:
	make -C ${LIBFT_DIR}

%.o: %.c
	${GCC} ${CFLAGS} ${INCLUDES} -c $< -o $@

# CLEANING
clean:
	${RM} 
	make -C ${LIBFT_DIR} ${LIBFT} clean

fclean:	clean
	${RM} 
	make -C ${LIBFT_DIR} ${LIBFT} clean

re:	fclean all

.PHONY:	all clean fclean re

