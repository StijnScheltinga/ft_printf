SOURCES	=	ft_putchrp.c ft_putstrp.c ft_put_i.c ft_printf.c ft_printp.c ft_print_x.c ft_print_x_up.c
OBJECTS =	$(SOURCES:.c=.o)
NAME 	=	libftprintf.a

all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@ 

gcc:
	gcc -Wall -Werror -Wextra ft_printf.c $(NAME) libft/libft.a

clean:
	rm -f $(OBJECTS)
	(cd libft && make clean)
	
fclean:
	rm -f $(OBJECTS) $(NAME)
	(cd libft && make fclean)

re:	fclean all

.PHONY = all clean fclean re gcc