# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 12:08:31 by uzanchi           #+#    #+#              #
#    Updated: 2024/05/02 12:08:36 by uzanchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = ft_display_file 
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
RM = rm -rf
AR = ar rcs

# Colors (When you change colors or styles using echo, you need to RESET the parameters at the end of the sentence.)
RESET	=	\033[0m
BLACK	=	\033[0;30m
RED	=	\033[1;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
PURPLE	=	\033[0;35m
CYAN	=	\033[0;36m
WHITE	=	\033[0;37m

# Styles (To change a style, you have to change the "0" after the open square bracket "[" in "Colors" to the following numbers.)
# NORMAL = 0
# BOLD = 1
# LOW INTENSITY = 2
# ITALIC = 3
# UNDERLINED = 4
# BLINKING = 5
# INVERTED/UNDERLINE = 7
# HIDDEN = 8
# CROSSED OUT = 9 

# Symbols
OK	=	✓
FAIL	=	✗
INFO	=	ⓘ

# Sources and Objects
SRCS	=	main.c

OBJS	= ${SRCS:.c=.o}

# Rules
all:	${NAME}

${NAME}: ${SRCS}
	@${CC} ${CFLAGS} -c ${SRCS}
	@${CC} -o ${NAME} ${OBJS} 
	@echo "${GREEN}${NAME} properly created${RESET}"
clean:
	@rm -f ${OBJS}
	@echo "${YELLOW}all .o files are removed${RESET}"

fclean:	clean
	@rm -f ${NAME}
	@echo "${RED}${NAME} is deleted${RESET}"

re:		fclean all

.PHONY:	all clean fclean re
