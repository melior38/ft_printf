NAME		:=	libftprintf.a

SRCS		:=	ft_printf.c \
		(ft_print_hexadecimal.c)

OBJS		:=	$(SRCS: .c=.o)

CC			:= gcc
CFLAGS		:= -Werror -Wall -Wextra
RM			:= rm -f

.o: .c
	$(CC) $(CFLAGS) .o $< .c $@

all:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 