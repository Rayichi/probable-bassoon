NAME =
CC = gcc
FLAGS = -wall -Wextra -Werror
SRCS =
OBJS = ${SRCS:.c=.o}
INCLUDE = 


.c.o:
	${CC} ${CFLAGS} -I $(INCLUDE) -c $< -o ${<:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
		$(CC) -o ${NAME} ${OBJS}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean