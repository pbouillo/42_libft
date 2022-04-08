# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 11:25:33 by pbouillo          #+#    #+#              #
#    Updated: 2022/04/08 15:49:52 by pbouillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_strchr.c ft_strdup.c \
	ft_strlen.c ft_strnstr.c \
	ft_tolower.c ft_toupper.c \

OBJS = $(*.o)

CC = 	gcc
CFLAGS = -Wall -Wextra -Werror
RM = 	rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) *.o

clean:
	$(RM) *.o !$(NAME)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
