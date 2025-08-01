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
CFLAGS = -Wall -Wextra -Werror -I include -fsanitize=address
SRC = src/ft_atoi.c \
	src/ft_atou32.c \
	src/ft_bzero.c \
	src/ft_calloc.c \
	src/ft_isalnum.c \
	src/ft_isalpha.c \
	src/ft_isascii.c \
	src/ft_isdigit.c \
	src/ft_isprint.c \
	src/ft_itoa.c \
	src/ft_lstadd_back.c \
	src/ft_lstadd_front.c \
	src/ft_lstlast.c \
	src/ft_lstnew.c \
	src/ft_lstsize.c \
	src/ft_memccpy.c \
	src/ft_memchr.c \
	src/ft_memcmp.c \
	src/ft_memcpy.c \
	src/ft_memmove.c \
	src/ft_memset.c \
	src/ft_putchar_fd.c \
	src/ft_putendl_fd.c \
	src/ft_putnbr_fd.c \
	src/ft_putstr_fd.c \
	src/ft_split.c \
	src/ft_strchr.c \
	src/ft_strdup.c \
	src/ft_strjoin.c \
	src/ft_strlcat.c \
	src/ft_strlcpy.c \
	src/ft_strlen.c \
	src/ft_strmapi.c \
	src/ft_strncmp.c \
	src/ft_strnstr.c \
	src/ft_strrchr.c \
	src/ft_strtrim.c \
	src/ft_substr.c \
	src/ft_tolower.c \
	src/ft_toupper.c \
	src/ft_printf/fill.c \
	src/ft_printf/ft_display_c.c \
	src/ft_printf/ft_display_d.c \
	src/ft_printf/ft_display_p.c \
	src/ft_printf/ft_display_percent.c \
	src/ft_printf/ft_display_prec.c \
	src/ft_printf/ft_display_results.c \
	src/ft_printf/ft_display_s.c \
	src/ft_printf/ft_display_u.c \
	src/ft_printf/ft_display_upperx.c \
	src/ft_printf/ft_display_x.c \
	src/ft_printf/ft_handle_conv.c \
	src/ft_printf/ft_handle_flags.c \
	src/ft_printf/ft_handle_precision.c \
	src/ft_printf/ft_handler.c \
	src/ft_printf/ft_handle_width.c \
	src/ft_printf/ft_init.c \
	src/ft_printf/ft_printf.c \
	src/ft_printf/ft_putchar.c \
	src/ft_printf/ft_puthex_lower.c \
	src/ft_printf/ft_puthex_upper.c \
	src/ft_printf/ft_putptr.c \
	src/ft_printf/ft_putstr.c \
	src/ft_printf/ft_putunsigned.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)
