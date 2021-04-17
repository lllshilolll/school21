# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbethani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 20:21:52 by gbethani          #+#    #+#              #
#    Updated: 2021/04/17 20:28:08 by gbethani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
SRCS = ft_isascii.c	ft_memcmp.c	ft_strlcat.c	ft_strrchr.c \
ft_atoi.c	ft_isdigit.c	ft_memcpy.c	ft_strlcpy.c	ft_tolower.c \
ft_bzero.c	ft_isprint.c	ft_memmove.c	ft_strlen.c	ft_touppert.c \
ft_isalnum.c	ft_memccpy.c	ft_memset.c	ft_strncmp.c	libft.h \
ft_isalpha.c	ft_memchr.c	ft_strchr.c	ft_strnstr.c
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

all: ${NAME}

clean:
${RM} ${OBJS}

fclean: clean
${RM} ${NAME}

re: fclean all
