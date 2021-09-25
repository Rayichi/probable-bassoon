NAME = libft.a

CC = gcc

FLAGS = -wall -Wextra -Werror

SRCS = $(addprefix src/, ft_split.c)

OBJS = ${SRCS:.c=.o}

INCLUDE = include




.c.o:
	${CC} ${CFLAGS} -I $(INCLUDE) -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar r ${NAME} ${OBJS}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean