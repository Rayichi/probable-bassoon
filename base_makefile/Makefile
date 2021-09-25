NAME =
CC = gcc
FLAGS = -wall -Wextra -Werror
SRCS =
OBJS = ${SRCS:.c=.o}
INCLUDE = 


.c .o:
	${CC} ${CFLAGS} -I $(INCLUDE) -c $< -o ${<:.c=.o}

all: ${NAME}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: flean $(NAME)

.PHONY: re all clean fclean