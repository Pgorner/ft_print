NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

SRC =	ft_bzero.c \
		ft_calloc.c \
		ft_checkletter.c \
		ft_flag.c \
		ft_hex.c \
		ft_itoa.c \
		ft_nbr.c \
		ft_pointer.c \
		ft_printf.c \
		ft_printstr.c \
		ft_putchar_fd.c \
		ft_putchar.c \
		ft_strlen.c \
		ft_uns.c \

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all : $(NAME)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean
		$(MAKE) all

.PHONY: all clean fclean re
