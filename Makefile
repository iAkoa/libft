# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmattheo <rmattheo@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:45:37 by rmattheo          #+#    #+#              #
#    Updated: 2021/11/11 13:53:52 by rmattheo         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_strrchr.c	\
			ft_calloc.c		\
			ft_strdup.c 	\
			ft_substr.c		\
			ft_strjoin.c		\

OBJS    = ${SRCS:.c=.o}

NAME    = libft.a

CC        = clang

CFLAGS    = -Wall -Wextra -Werror

HEADER = libft.h

.c.o: ${HEADER} Makefile
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
		ar r ${NAME} ${OBJS}

all:    ${NAME}

clean:
		rm -f ${OBJS}

fclean:    clean
		rm -f ${NAME}

re:        fclean all

.PHONY:    all clean fclean re
