# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbethani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/17 20:21:52 by gbethani          #+#    #+#              #
#    Updated: 2021/04/18 17:44:47 by gbethani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isascii.c	ft_memcmp.c	ft_strlcat.c	ft_strrchr.c \
ft_atoi.c	ft_isdigit.c	ft_memcpy.c	ft_strlcpy.c	ft_tolower.c \
ft_bzero.c	ft_isprint.c	ft_memmove.c	ft_strlen.c	ft_toupper.c \
ft_isalnum.c	ft_memccpy.c	ft_memset.c	ft_strncmp.c \
ft_isalpha.c	ft_memchr.c	ft_strchr.c	ft_strnstr.c ft_strdup.c
OBJS = ${SRCS:.c=.o}
HEADER = libft.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ./libft


$(NAME): ${OBJS}
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
