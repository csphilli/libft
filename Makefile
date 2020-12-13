# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 15:59:38 by cphillip          #+#    #+#              #
#    Updated: 2020/11/25 12:23:17 by cphillip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
LIB = ./libft/libft.a
LIB_FOLDER = ./libft/
OBJ_DIR = ./obj
SRC = ./ft_printf/srcs/

FUNC = 	ft_printf.c initializing.c staging.c\
		parse.c checking.c print_c.c print_s.c\
		print_p.c print_x.c pre_staging.c print_other.c\
		print_alt.c x_padding.c print_o.c print_u.c print_d.c\
		print_f.c get_numbers.c handle_max.c

C_FILES = $(addprefix $(SRC), $(FUNC))
OBJECTS = $(FUNC:.c=.o)
LIB_OBJECTS = ./libft/*.o

INCLUDES = -I ./libft/includes/ -I ./ft_printf/includes/

all: $(NAME)

$(NAME):
	@make -C $(LIB_FOLDER)
	@cp $(LIB) ./$(NAME)
	@mkdir -p obj
	@gcc $(FLAGS) $(INCLUDES) -c $(C_FILES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@mv $(OBJECTS) $(OBJ_DIR)

clean:
	@rm -rf $(OBJECTS) $(LIB_OBJECTS)

fclean: clean
	@rm -rf $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
