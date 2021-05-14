GCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = $(shell find * -name "ft_*.c" ! -name "ft_lst*.c")
SRCS_BONUS = $(shell find * -name "ft_lst*.c")
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
INCLUDE = -I ./libft.h

all : $(NAME)

%.o : %.c
	$(GCC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $@ $^

clean : 
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : 
	rm -f $(NAME)

re : fclean all

bonus : $(OBJS_BONUS)
	ar rcs $(NAME) $^
