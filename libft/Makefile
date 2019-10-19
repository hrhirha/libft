# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:36:45 by hrhirha           #+#    #+#              #
#    Updated: 2019/10/19 13:31:37 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
B_SRC = $(wildcard bonus/*.c)
B_OBJ = $(B_SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)

bonus : clean
	$(CC) $(FLAGS) -c $(B_SRC) -o $(B_OBJ)
	ar rc $(NAME) $(B_OBJ)

