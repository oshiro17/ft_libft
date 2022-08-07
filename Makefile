SRCS		=	ft_put_hex.c ft_putstr.c\
				ft_printf.c utils.c\
				ft_uitoa.c ft_print_ptr.c ft_printchar.c

OBJS		=	$(SRCS:.c=.o)
CC 			=	cc
CFLAGS 		=	-Wall -Wextra -Werror -I ft_printf.h

NAME 		=	libftprintf.a
LIBFTDIR 	=	./libft
RM			=	rm -f

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(MAKE) -C $(LIBFTDIR)
			cp libft/libft.a $(NAME)
			ar -rcs $(NAME) $(OBJS)

clean:	
				$(MAKE) clean -C $(LIBFTDIR)
				$(RM) $(OBJS)

fclean: 		clean
				$(MAKE) fclean -C $(LIBFTDIR)
				$(RM) $(NAME)

re:				fclean all


.PHONY:			all clean fclean re