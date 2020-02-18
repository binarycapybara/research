# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 17:33:17 by fjenae            #+#    #+#              #
#    Updated: 2020/02/17 17:20:16 by fjenae           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PS = push_swap

LIB_DIR = ./libft
LIB = $(LIB_DIR)/libft.a
INC_PSW = ./includes

HEADER_PSW = $(INC_PSW)/push_swap.h

# dirs
DIR_S = srcs
DIR_O = objs

# files
C_FILES = ft_parse.c

SRSC = $(addprefix $(DIR_S)/,$(C_FILES))
OBJS = $(addprefix $(DIR_O)/,$(C_FILES:.c=.o))

# flags
CC = gcc
FLAGS = -Wall -Werror -Wextra -g
INC_LIBS = -L $(LIB_DIR) -lft
INC_HEADERS = -I $(INC_PSW) -I $(LIB_DIR)

.PHONY: all clean fclean re lib

all: $(NAME_PS)

$(NAME_PS): $(DIR_O) $(LIB) $(OBJS) push_swap.c
	$(CC) $(FLAGS) $(OBJS) $(INC_HEADERS) $(INC_LIBS) push_swap.c -o $@

$(DIR_O):
	mkdir -p objs

$(LIB):
	make -C ./libft

$(DIR_O)/%.o: $(DIR_S)/%.c $(HEADER_PSW)
	$(CC) $(FLAGS) -I $(INC_PSW) -I $(LIB_DIR) -c ./$< -o $@

clean:
	rm -rf $(DIR_O)
	make -C ./libft fclean

fclean:	clean
	rm -F $(NAME_PS)

re: fclean all