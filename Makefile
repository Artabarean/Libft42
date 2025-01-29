# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 11:11:19 by atabarea          #+#    #+#              #
#    Updated: 2025/01/29 11:13:33 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_substr.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strtrim.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_memmove.c  ft_strjoin.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c ft_split.c ft_itoa.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
# AR to compile a library with the objects passed
# RCS are flaggs -
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
re: fclean all
.PHONY: clean fclean re