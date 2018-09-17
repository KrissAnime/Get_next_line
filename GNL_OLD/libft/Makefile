# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbester <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/21 08:58:42 by cbester           #+#    #+#              #
#    Updated: 2018/06/15 06:57:18 by cbester          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEST_FILE = main.c
FLAGS = -Wall -Wextra -Werror
COMPILER = gcc
NAME = libft.a
FILES_DIR = ./
FUNCTIONS = ft_bzero.c ft_memalloc.c ft_memchr.c ft_memcpy.c ft_memccpy.c\
			ft_memdel.c ft_memmove.c ft_memset.c ft_strclr.c ft_strdel.c\
			ft_striter.c ft_striteri.c ft_putendl.c ft_putendl_fd.c ft_putstr.c\
			ft_putstr_fd.c ft_putchar.c ft_putchar_fd.c ft_putnbr.c\
			ft_putnbr_fd.c ft_itoa.c ft_strcat.c ft_strchr.c ft_strrchr.c\
			ft_strjoin.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strnew.c\
			ft_strdup.c ft_strsplit.c ft_strncpy.c ft_strcpy.c ft_strstr.c\
		   	ft_strsub.c ft_strtrim.c ft_strnstr.c ft_atoi.c ft_isalnum.c\
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c\
			ft_tolower.c ft_toupper.c ft_strcmp.c ft_strequ.c ft_strlcat.c\
			ft_strlen.c ft_strncmp.c ft_strnequ.c ft_lstnew.c ft_lstdelone.c\
			ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c
FILES = $(addprefix $(FILES_DIR), $(FUNCTIONS))
OBJECTS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	@ranlib	$(NAME)

%.o: %.c
	@$(COMPILER) $(FLAGS) -c $< -o $@

.PHONY: clean fclean re compile run

clean:
	@/bin/rm -f $(OBJECTS) libft.h.gch

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

compile:
	@$(COMPILER) $(FLAGS) $(TEST) $(NAME)

run:
	@./a.out
