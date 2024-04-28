CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = ft_display_file 

SRCS	=	main.c

OBJS	= ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${SRCS}
	@${CC} ${CFLAGS} -c ${SRCS}
	@${CC} -o ${NAME} ${OBJS} 
	@echo "\033[32m${NAME} properly created\033[0m"
clean:
	@rm -f ${OBJS}
	@echo "\033[33mall .o files are removed\033[0m"

fclean:	clean
	@rm -f ${NAME}
	@echo "\033[31m${NAME} is deleted\033[0m"

re:		fclean all

.PHONY:	all clean fclean re
