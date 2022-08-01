NAME    =  libftprintf.a

SRCS    =   ft_printf.c		ft_printf_utils.c	ft_putchar.c	ft_putnbr.c	ft_putstr.c	ft_strlen.c\
			revstr.c

#SRCS_B  =   

HEADER	=	ft_printf.h

OBJ		=	$(SRCS:.c=.o)

#OBJ_B	=	$(SRCS_B:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I.

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

bonus	:	 $(OBJ_B) $(HEADER)
	ar rcs $(NAME) $(OBJ_B)

clean	:
	rm -f $(OBJ) $(OBJ_B)

fclean  :   clean
	rm -f $(NAME)

re      :   fclean all