# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pat <pat@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:45:37 by rmattheo          #+#    #+#              #
#    Updated: 2021/11/14 17:39:41 by pat              ###   ########lyon.fr    #
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
			ft_strtrim.c	\
			ft_putchar_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_strmapi.c	\
			ft_strmapi.c	\
			ft_putendl_fd.c	\
			ft_striteri.c	\
			ft_split.c		\

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
