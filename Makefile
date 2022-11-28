# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/12 12:10:58 by pbouillo          #+#    #+#              #
#    Updated: 2022/11/28 13:15:37 by pbouillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a

SRCS 		= 	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_digitcount.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_digitcount.c \
				ft_memdel.c \
				ft_strdel.c \
				ft_lstfind.c \
				ft_node_free.c \
				ft_lst_delete.c \
				ft_lst_duplicate.c \
				ft_lst_print.c \
				ft_lstfree.c \
				ft_lstssize.c \
				ft_new_node.c \
				ft_node_delete.c \
				ft_node_free.c \
				ft_node_insert_end.c \
				ft_node_insert_front.c \
				ft_node_last.c \

CC 			=	cc
CFLAGS	 	=	-Wall -Werror -Wextra
RM 			=	rm -rf
OBJS 		=	$(SRCS:.c=.o)

all: 			$(NAME)

$(NAME):
				$(CC) $(CFLAGS) -c $(SRCS)
				ar -rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) !$(NAME)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re