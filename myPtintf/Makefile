NAME = libftprintf.a
SRCS = sources/ft_putchar_fd.c		sources/work_with_perc.c\
sources/flag_what.c		sources/ft_strdup.c		sources/work_with_point.c\
sources/flags.c			sources/ft_strlen.c		sources/work_with_str.c\
sources/ft_base.c		sources/ft_tolower.c		sources/work_with_u.c\
sources/ft_isdigit.c		sources/u_itoa.c		sources/work_with_x.c\
sources/ft_itoa.c		sources/work_with_char.c\
sources/ft_printf.c		sources/work_with_int.c
HEADER = include/ft_printf.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${INCLUDES} 

$(NAME): ${OBJS} ${HEADER}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
