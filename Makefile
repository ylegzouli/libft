# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 15:59:06 by ylegzoul          #+#    #+#              #
#    Updated: 2019/11/16 14:02:06 by ylegzoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=libft.a

SRCS		 =	ft_calloc.c\
				ft_isprint.c\
				ft_memcpy.c\
				ft_strdup.c\
				ft_strncmp.c\
				ft_tolower.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_memccpy.c\
				ft_memmove.c\
				ft_strlcat.c\
				ft_strnstr.c\
				ft_strcpy.c\
				ft_toupper.c\
				ft_atoi.c\
				ft_isascii.c\
				ft_memchr.c\
				ft_memset.c\
				ft_strlcpy.c\
				ft_strrchr.c\
				ft_bzero.c\
				ft_isdigit.c\
				ft_memcmp.c\
				ft_strchr.c\
				ft_strlen.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_itoa_base.c\

SRCB		= ft_putnbr_base_lst_ul.c ft_putnbr_base_lst_u.c ft_putnbr_lst_u.c ft_putnbr_base_lst.c ft_lstnew_malloc.c ft_putnbr_lst.c ft_putchar_lst.c ft_putstr_lst.c ft_lstmap.c ft_lstclear.c ft_lstiter.c ft_lstdelone.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstnew.c ft_tab_to_lst.c ft_print_lst_char.c

OBJS		= ${SRCS:.c=.o}

OBJB		= ${SRCB:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	libft.h ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}
.c.o:	
			cc ${CFLAGS} -c $< -o ${<:.c=.o}


all:		${NAME}

clean:		
			rm -f ${OBJS} ${OBJB}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

bonus:		${OBJS} ${OBJB}
			ar rcs ${NAME} ${OBJS} ${OBJB}

.PHONY:		clean fclean all re
