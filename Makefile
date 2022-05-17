NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=address

SRC =	./src/main.c

OBJ = ${SRC:%.c=%.o}

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re