NAME = libft.a

CC = gcc

FLAGS = -wall -Wextra -Werror

FILE = $(addsuffix .c, ft_split test_split)

SRCS = $(FILE)

OBJS = ${SRCS:.c=.o}

INCLUDE = include




.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	$(CC) ${OBJS}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean