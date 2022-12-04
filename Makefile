# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/12 12:10:58 by pbouillo          #+#    #+#              #
#    Updated: 2022/12/04 16:09:14 by pbouillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
DIRS		= libft
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM 			= rm
SRC_DIR		= src
INC_DIR		= incl
AR 			= ar rc
BIN_DIR 	= bin
# **************************************************************************** #
# COLORS

GREEN		= \033[0;92m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
END_COLOR	= \033[0;39m

# **************************************************************************** #
# SOURCES

SRCS 		= 	ft_atoi\
				ft_bzero\
				ft_calloc\
				ft_digitcount\
				ft_isalnum\
				ft_isalpha\
				ft_isascii\
				ft_isdigit\
				ft_isprint\
				ft_itoa\
				ft_lstadd_back\
				ft_lstadd_front\
				ft_lstclear\
				ft_lstdelone\
				ft_lstiter\
				ft_lstlast\
				ft_lstmap\
				ft_lstnew\
				ft_lstsize\
				ft_memchr\
				ft_memcmp\
				ft_memcpy\
				ft_memmove\
				ft_memset\
				ft_putchar\
				ft_putchar_fd\
				ft_putendl_fd\
				ft_putnbr\
				ft_putnbr_fd\
				ft_putstr\
				ft_putstr_fd\
				ft_split\
				ft_strchr\
				ft_strdup\
				ft_striteri\
				ft_strjoin\
				ft_strlcat\
				ft_strlcpy\
				ft_strlen\
				ft_strmapi\
				ft_strncmp\
				ft_strnstr\
				ft_strrchr\
				ft_strtrim\
				ft_substr\
				ft_tolower\
				ft_toupper\
				ft_digitcount\
				ft_memdel\
				ft_strdel\
				ft_lstfind\
				ft_node_free\
				ft_lst_delete\
				ft_lst_duplicate\
				ft_lst_print\
				ft_lstfree\
				ft_lstssize\
				ft_new_node\
				ft_node_delete\
				ft_node_free\
				ft_node_insert_end\
				ft_node_insert_front\
				ft_node_last\
				ft_strcmp\
				ft_int_strcmp\
				get_next_line

SRC				= $(addprefix $(SRC_DIR)/, $(addsuffix .c, $(SRCS)))
OBJ 			= $(addprefix $(BIN_DIR)/, $(addsuffix .o, $(SRCS)))

# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)$(NAME) compiled. $(DEF_COLOR)"

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c Makefile | $(BIN_DIR)
	@$(CC) -c $(CFLAGS) -I $(INC_DIR) $< -o $@
	@echo "$(BLUE)Compiling... $(notdir $<) in $(DIRS) $(END_COLOR)"

$(BIN_DIR):
	@mkdir $(BIN_DIR)
	@echo "$(YELLOW)Created $(BIN_DIR)/ directory in $(DIRS)/$(END_COLOR)"

clean:
	@rm -rf $(BIN_DIR)
	@echo "$(YELLOW)$(NAME) object files cleaned.$(END_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)$(NAME) .a file cleaned.$(END_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned all and rebuilt $(NAME)$(END_COLOR)"

# **************************************************************************** #
# PHONY

.PHONY: all clean fclean re
