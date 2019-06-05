# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 12:59:27 by bphofuya          #+#    #+#              #
#    Updated: 2019/06/04 14:48:33 by bphofuya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Werror -Wextra -Wall

NAME = libft.a

SRC = ft_strcat.c \
		ft_strlcat.c \
		ft_isalnum.c \
		ft_strcmp.c	\
		ft_strlen.c \
		ft_isalpha.c \
		ft_memset.c	\
		ft_strcpy.c	\
		ft_bzero.c \
		ft_isascii.c \
		ft_memcpy.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	echo "$(NAME) Created"
	ranlib $(NAME)
	echo "$(NAME) indexed"

$(OBJ): %.o: %.c
	gcc $(FLAG) -c $< -o $@
	echo "Objects created"

clean:
	rm -rf *.o
	echo "Objects deleted"

fclean: clean
	rm -rf $(NAME)
	echo "$(NAME) Deleted"

re: fclean all
