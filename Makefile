SRCS	= main.c busca_char.c is_printer_chars.c ft_removespc.c ft_strstr.c clean_number.c dic_create.c ft_readstring.c read_line.c dic_search.c imprime.c ft_char3.c imprime_cifras.c ft_strlen.c ft_strcpy.c ft_strjoin.c ft_print.c ft_putchar.c ft_static_print.c
OBJS	= ${SRCS:.c=.o}
NAME	= rush-02
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -DDEBUG -g
DEBUG	= lldb
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

d:			all

.PHONY:		debug
debug:
			${DEBUG} ${NAME} 

.PHONY:		s
s:
			./${NAME}}

.PHONY: norma
norma:
	norminette ${SRCS}
	norminette *.h
