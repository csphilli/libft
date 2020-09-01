# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 15:59:38 by cphillip          #+#    #+#              #
#    Updated: 2020/09/01 14:29:26 by cphillip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ_DIR = ./obj/

LIB_HEADER = ./header/
GNL_HEADER = ./header/
FT_PRINTF_HEADER = ./ft_printf/includes/

LIB_SRC = 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
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
			ft_s_inlower.c ft_s_inupper.c ft_s_toupper.c

GNL_SRC = 		get_next_line.c


FT_PRINTF_SRC_DIR = ./ft_printf/src/
FT_PRINTF_SRC = ft_printf.c initializing.c staging.c\
				parse.c checking.c print_c.c print_s.c\
				print_p.c print_x.c pre_staging.c print_other.c\
				print_alt.c x_padding.c print_o.c print_u.c print_d.c\
				print_f.c get_numbers.c handle_max.c 

LIB_OBJECTS = $(LIB_SRC:.c=.o)
GNL_OBJECTS = $(GNL_SRC:.c=.o)
FT_PRINTF_OBJECTS = $(FT_PRINTF_SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIB_OBJECTS) $(GNL_OBJECTS) $(FT_PRINTF_OBJECTS) $(OBJ_DIR)
	ar rc $(NAME) $(LIB_OBJECTS) $(GNL_OBJECTS) $(FT_PRINTF_OBJECTS)
	ranlib $(NAME)
	mv *.o obj/

$(OBJ_DIR):
	mkdir -p obj

$(LIB_OBJECTS): $(LIB_SRC)
	$(CC) $(CFLAGS) -c $(LIB_SRC) -I $(LIB_HEADER)

$(GNL_OBJECTS): $(GNL_SRC)
	$(CC) $(CFLAGS) -c $(GNL_SRC) -I $(GNL_HEADER)

$(FT_PRINTF_OBJECTS): $(addprefix $(FT_PRINTF_SRC_DIR), $(FT_PRINTF_SRC))
	$(CC) $(CFLAGS) -c $(addprefix $(FT_PRINTF_SRC_DIR), $(FT_PRINTF_SRC)) -I $(FT_PRINTF_HEADER)

clean:
	rm -rf 	$(addprefix $(OBJ_DIR), $(LIB_OBJECTS))\
			$(addprefix $(OBJ_DIR), $(GNL_OBJECTS))\
			$(addprefix $(OBJ_DIR), $(FT_PRINTF_OBJECTS))\
			*.o\
			$(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
