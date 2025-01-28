NAME = libft.a

all: $(NAME)

$(NAME):
	cc -c *.c
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

format:
	c_formatter_42 *.c
