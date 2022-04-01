# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 11:25:33 by pbouillo          #+#    #+#              #
#    Updated: 2022/04/01 12:12:38 by pbouillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean:
	rm *.o $(NAME)

re: fclean all
