# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:36:45 by hrhirha           #+#    #+#              #
#    Updated: 2019/11/04 16:35:30 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I include
SDIR = src
ODIR = obj
SRC = $(wildcard $(SDIR)/*.c $(SDIR)/ft_printf/*.c)
OBJ = $(patsubst $(SDIR)/%,$(ODIR)/%,$(SRC:.c=.o))

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

$(ODIR)/%.o : $(SDIR)/%.c
	@mkdir -p $(ODIR)/ft_printf
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -rf $(ODIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean $(NAME)
