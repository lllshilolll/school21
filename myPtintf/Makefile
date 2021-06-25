NAME = libftprintf.a
SRCS = ./sources/*.c

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -c
INCLUDES = -I./include

OBJS = *.o

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(INCLUDES)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
