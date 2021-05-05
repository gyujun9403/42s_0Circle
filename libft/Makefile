GCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ./*c
OBJS = $(SRCS:.c=.o)
INCLUDE = -I ./libft.h
TEST = ./test.c

all : $(NAME)

%.o : %.c
	$(GCC) $(CFLAGS) $(INCLUDE) -c $< -o $o

$(NAME) : $(OBJS)
	ac rc $(NAME) $(OBJS)

clean : 
	rm -f $(OBJS) 

fclean : 
	rm -f $(TARGET)

re : fclean all

test : $(TEST)
	$(GCC) -o test test.c
