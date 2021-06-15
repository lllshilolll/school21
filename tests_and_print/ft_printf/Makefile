NAME = libftprintf.a
SRCS = ./sourses/*.c

CC = gcc
RM = rm -f
CFLAGS = -c -Wall -Wextra -Werror
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
