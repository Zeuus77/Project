CC = gcc
LIBC = ar -rcs
INC = libft.h 
FLAGS = -Wall -Wextra -Werror
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_striteri.c ft_strmapi.c ft_split.c ft_putnbr_fd.c
OBJS = ${SRCS:.c=.o}
NAME = libft.a

$(NAME) : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: $(NAME)

%.o:%.c
	${CC} ${FLAGS} -c $< -I $(INC)
	
clean:
	rm -f *.o

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: all fclean clean re
