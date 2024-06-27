# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 09:30:05 by cparodi           #+#    #+#              #
#    Updated: 2024/06/27 15:49:40 by cparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE = push_swap

# Files
SRC =			srcs/push_swap.c \
				srcs/moves/sa.c \
				srcs/moves/sb.c \
				# srcs/moves/ss.c \
				# srcs/moves/pa.c \
				# srcs/moves/pb.c \
				# srcs/moves/ra.c \
				# srcs/moves/rb.c \
				# srcs/moves/rr.c \
				# srcs/moves/rra.c \
				# srcs/moves/rrb.c \

SRC_PARSING =	srcs/parsing/error.c \
				srcs/parsing/parsing.c \

SRC_UTILS =		srcs/utils/ft_atol.c \
				srcs/utils/ft_split.c \
				srcs/utils/ft_countwords.c \
				srcs/utils/ft_strcmp.c \
				srcs/utils/ft_strlen.c \
				srcs/utils/ft_putnstr_fd.c \
				# srcs/utils/ft_lstnew.c \
				# srcs/utils/ft_lstlast.c \
				# srcs/utils/ft_lstsize.c \
				# srcs/utils/ft_lstfree.c \

SRC_LISTS =		srcs/lists/ft_list.c \
				srcs/lists/utilslist/create_node.c \
				srcs/lists/utilslist/create_list.c \
				srcs/lists/utilslist/init_list.c \
				srcs/lists/utilslist/list_add_back.c \
				srcs/lists/utilslist/list_add_front.c \



SOURCES =		${SRC} ${SRC_PARSING} ${SRC_UTILS} ${SRC_LISTS}
OBJECTS =		${SOURCES:.c=.o}

# Variables
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -g3 -fsanitize=address
RM		= rm -f

# Loading Bar
RESET		= \e[0m
UP			= \e[A

WHITE		= \e[0;1;97m
_WHITE		= \e[1;4;97m
RED			= \e[0;1;31m
GREEN		= \e[0;1;32m
_GREEN		= \e[1;4;32m

FILE_COUNT	= 0
FILE_TOTAL	= 18
BAR_SIZE	= ${shell expr 100 \* ${FILE_COUNT} / ${FILE_TOTAL}}
BAR_LOAD	= ${shell expr 23 \* ${FILE_COUNT} / ${FILE_TOTAL}}
BAR_REST	= ${shell expr 23 - ${BAR_LOAD}}

# Makefile
all:		${EXE}

${EXE}:		${OBJECTS}
		@${CC} ${CFLAGS} ${OBJECTS} -o ${EXE}
		@echo "\n\n${GREEN}[✓] - ${_GREEN}Push Swap${GREEN} Successfully Compiled!${RESET}"
		@${RM} ${OBJECTS}

%.o:		%.c
		@${eval FILE_COUNT = ${shell expr ${FILE_COUNT} + 1}}
		@${CC} ${CFLAGS} -c $? -o $@
		@echo "${WHITE}[!] - Compilation loading...${RESET}"
		@printf "${WHITE}[${GREEN}%-.${BAR_LOAD}s${RED}%-.${BAR_REST}s${WHITE}] [%d/%d (%d%%)]${RESET}" "#######################" "#######################" ${FILE_COUNT} ${FILE_TOTAL} ${BAR_SIZE}
		@echo ""
		@echo "${UP}${UP}${UP}"

clean:
		@${RM} ${OBJECTS}
		@echo "${WHITE}[!] - ${_WHITE}Push Swap${WHITE} Successfully Cleaned!${RESET}"

fclean: clean
		@${RM} ${OBJECTS} ${EXE}
re:			fclean all

.PHONY: all clean fclean re
