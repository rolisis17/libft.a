SRCS =ft_strlen.c ft_toupper.c ft_tolower.c ft_strrchr.c \
ft_strchr.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c \
ft_isalnum.c
CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = libft.a
OBJS = $(SRCS:.c=.o)
RM = rm -f
LIBC = ar rc
INCS = libft.h
DB = -g

.c.o: $(INCS)
	$(CC) $(CFLAGS) -c $(<) -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
