NAME = libft.a

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_strlcat.c ft_putchar_fd.c ft_strtrim.c ft_striteri.c ft_split.c\
		ft_isdigit.c ft_memmove.c ft_memset.c ft_memcmp.c ft_strrchr.c ft_calloc.c ft_putnbr_fd.c ft_substr.c\
		ft_strlen.c ft_tolower.c ft_strncmp.c ft_memchr.c ft_strlcpy.c ft_strdup.c ft_putendl_fd.c ft_strmapi.c\
		ft_toupper.c ft_strchr.c ft_bzero.c ft_memcpy.c ft_strnstr.c ft_atoi.c ft_putstr_fd.c ft_strjoin.c ft_itoa.c\

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME): $(OBJECTS)
		$(AR) -rc $@ $?
%.o: %.c 
		$(CC) $(CFLAGS) -c $? -g3
clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test