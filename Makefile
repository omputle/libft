NAME = libft.a

CC = gcc

SRC = *.c

OBJECT = *.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

run:
	$(CC) $(FLAGS) $(NAME) main.c -o test
	./test

norm:
	Norminette -R CheckForbiddenSourceHeader
