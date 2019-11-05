# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 11:09:27 by ylegzoul          #+#    #+#              #
#    Updated: 2019/11/05 13:30:22 by ylegzoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

HDDIRS=-I includes/

SRC=ft_atoi.c  	ft_memccpy.c	ft_putchar_fd.c	ft_strsplit.c	ft_strncmp.c	ft_bzero.c	ft_memchr.c	ft_putendl.c	ft_strchr.c	ft_strtrim.c	ft_isalnum.c	ft_memcmp.c	ft_putendl_fd.c	ft_strdup.c	ft_tolower.c	ft_isalpha.c	ft_memcpy.c	ft_putnbr.c	ft_strjoin.c	ft_toupper.c	ft_isascii.c	ft_memmove.c	ft_putnbr_fd.c	ft_strlcat.c	ft_isdigit.c	ft_memset.c	ft_putstr.c	ft_strlcpy.c	ft_isprint.c	ft_putchar.c	ft_putstr_fd.c	ft_strlen.c 

OBJ=$(SRC:.c=.o)

$(NAME): libft.h
	$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
