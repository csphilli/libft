# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 15:59:38 by cphillip          #+#    #+#              #
#    Updated: 2021/01/02 15:18:39 by cphillip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC_DIR = ./srcs/
OBJ_DIR = ./obj
SRC = 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c\
		ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
		ft_strstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c\
		ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c\
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c\
		ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c\
		ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_lword.c ft_nbr_size.c ft_nbw.c\
		ft_strncpy.c ft_isspace.c ft_strnstr.c ft_lstnew.c\
		ft_lstdel.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c\
		ft_lstmap.c ft_nbr_size_base.c ft_revstr.c\
		ft_strndup.c ft_intlen_max.c ft_ftoa.c ft_itoa_uintmax.c\
		ft_putnbrmax.c ft_itoa_base.c ft_atoimax.c\
		ft_s_inlower.c ft_s_inupper.c ft_s_toupper.c\
		ft_free_strsplit.c ft_is_str_nbr.c ft_nbrstrcmp.c\
		get_next_line.c ft_lstcontent.c ft_error_exit.c\
		ft_lstappend.c

INCLUDES = -I ./includes/
C_FILES = $(addprefix $(SRC_DIR), $(SRC))
OBJECTS = $(SRC:.c=.o)

TEST_FILE = main.c

all: $(NAME)

$(NAME): $(C_FILES)
	@if git submodule status | egrep -q '^[-]' ; then \
		echo "INFO: Initializing git submodules"; \
		git submodule update --init; \
	fi
	@echo "Compiling library..."
	@mkdir -p $(OBJ_DIR)
	@gcc $(FLAGS) $(INCLUDES) -c $(C_FILES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@mv $(OBJECTS) $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test
