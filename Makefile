SRCS	= main.c busca_char.c is_printer_chars.c ft_removespc.c strstr.c clean_number.c copy_str.c dic_create.c ft_readstring.c read_line.c dic_search.c
OBJS	= ${SRCS:.c=.o}
NAME	= rush-02
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -DDEBUG
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
