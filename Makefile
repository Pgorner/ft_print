NAME = libftprintf.a
all:
	@gcc -Wall -Wextra -Werror -c ft_*.c ft_printf.h
	@ar rc $(NAME) $? ft_*.o ft_printf.h
clean:
	rm -f ft_*.o
fclean: clean
	rm -f ${NAME} $(NAME:.a=.h.gch)
re: fclean all
.PHONY: all clean fclean re
