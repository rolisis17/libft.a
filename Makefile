SRCS = ft_putstr.c ft_rev_int_tab.c ft_sort_int_tab.c ft_strlen.c ft_vid_mod.c main.c
CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = libft.a
OBJS = $(SRCS:.c=.o)
RM = rm -f
LIBC = ar rc
INCS = libft.h
INCLUDE = -I
DB = -g

.c.o:
	$(CC) $(CFLAGS) -c $(<) -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)
	$(CC) $(CFLAGS) $(DB) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
