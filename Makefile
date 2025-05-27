# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 11:30:51 by sfilipe-          #+#    #+#              #
#    Updated: 2025/04/22 10:33:34 by sfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_strncmp.c ft_split.c

CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -fr
AR=ar rcs

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

.c:.o
							$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ)
							# $(CC) $(CFLAGS) $(OBJ) -o $(NAME)
							@$(AR) $(NAME) $(OBJ)
clean:
							@$(RM) $(OBJ)
fclean: clean
							@$(RM) $(NAME)
re: fclean all