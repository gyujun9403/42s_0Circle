GCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = $(wildcard ./*.c)
OBJS = $(SRCS:.c=.o)
INCLUDE = -I ./libft.h

all : $(NAME)

%.o : %.c
	$(GCC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $@ $^

clean : 
	rm -f $(OBJS) 

fclean : 
	rm -f $(NAME)

re : fclean all
