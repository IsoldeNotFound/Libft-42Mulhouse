
NAME = libft.a

SRCS =	ft_putchar.c \
		ft_swap.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strcmp.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re