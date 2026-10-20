NAME = libft.a
CC = cc
AR = ar
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = -r -c -s
DEPFLAGS = -MMD -MP
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memset.c ft_strdup.c \
	ft_strlen.c ft_tolower.c ft_toupper.c \
	ft_strchr.c ft_strncmp.c ft_strrchr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_strjoin.c ft_itoa.c \
	ft_strlcpy.c ft_memmove.c ft_substr.c \
	ft_strmapi.c ft_striteri.c ft_strnstr.c \
	ft_strtrim.c ft_strlcat.c ft_split.c \
	ft_lstnew.c
OBJS = ${SRCS:.c=.o}
DEPS = ${SRCS:.c=.d}

.PHONY: clean fclean re all

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} ${DEPFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${AR} ${ARFLAGS} ${NAME} ${OBJS}

clean:
	rm -f ${OBJS} ${DEPS}

fclean: clean
	rm -f ${NAME}

re: fclean all

-include ${DEPS}