NAME = libft.a

CC = gcc

FLAGS = -wall -Wextra -Werror

FILE = $(addsuffix .c, ft_split ft_strlen ft_putchar ft_putstr ft_swap ft_strdup ft_putnbr ft_strcmp)

SRCS = $(addprefix src/, $(FILE))

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