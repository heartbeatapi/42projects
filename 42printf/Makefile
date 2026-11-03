NAME = libftprintf.a

CC = cc
CFLAG = -Wall -Werror -Wextra

AR = ar
ARFLAG = -r -c -s

SRC = ft_printf.c ft_putchar.c ft_formatcheck.c \
		ft_putstr.c ft_putadd.c ft_putnbr.c \
		ft_putunsign.c ft_puthexlower.c ft_puthexupper.c
OBJ = ${SRC:.c=.o}

DEP = ${SRC:.c=.d}
DEPFLAG = -MMD -MP

-include ${DEP}

.PHONY = clean fclean re all

all: ${NAME}

%.o: %.c
	${CC} ${CFLAG} ${DEPFLAG} -c $< -o $@

${NAME}: ${OBJ}
	${AR} ${ARFLAG} ${NAME} ${OBJ}

clean:
	rm -f ${OBJ} ${DEP}

fclean: clean
	rm -f ${NAME}

re: fclean all