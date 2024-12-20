# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duha <duha@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:45:39 by duha              #+#    #+#              #
#    Updated: 2024/11/26 02:06:03 by duha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC_CLASSIFY = 	src/classify/ft_isalnum.c \
				src/classify/ft_isalpha.c \
				src/classify/ft_isascii.c \
				src/classify/ft_isdigit.c \
				src/classify/ft_islower.c \
				src/classify/ft_isprint.c \
				src/classify/ft_isspace.c \
				src/classify/ft_isupper.c


SRC_CONVERT = 	src/convert/ft_atoi.c \
				src/convert/ft_itoa.c \
				src/convert/ft_tolower.c \
				src/convert/ft_toupper.c

SRC_IN_OUT = 	src/in_out/ft_putchar_fd.c \
				src/in_out/ft_putstr_fd.c \
				src/in_out/ft_putendl_fd.c \
				src/in_out/ft_putnbr_fd.c

SRC_MEMORY = 	src/memory/ft_bzero.c \
				src/memory/ft_calloc.c \
				src/memory/ft_memchr.c \
				src/memory/ft_memcmp.c \
				src/memory/ft_memcpy.c \
				src/memory/ft_memmove.c \
				src/memory/ft_memset.c

SRC_STRING = 	src/string/ft_strchr.c \
				src/string/ft_strdup.c \
				src/string/ft_strjoin.c \
				src/string/ft_strlcat.c \
				src/string/ft_strlcpy.c \
				src/string/ft_strlen.c \
				src/string/ft_strmapi.c \
				src/string/ft_strncmp.c \
				src/string/ft_strnstr.c \
				src/string/ft_strrchr.c \
				src/string/ft_strtrim.c \
				src/string/ft_substr.c \
				src/string/ft_split.c \
				src/string/ft_striteri.c

SRC_PRINTF = src/printf/ft_printf.c \
				src/printf/ft_print_char.c \
				src/printf/ft_print_str.c \
				src/printf/ft_print_pointer.c \
				src/printf/ft_print_decimal.c \
				src/printf/ft_print_udecimal.c \
				src/printf/ft_print_hex_lower.c \
				src/printf/ft_print_hex_upper.c

SRC = $(SRC_CLASSIFY) $(SRC_CONVERT) $(SRC_IN_OUT) $(SRC_MEMORY) $(SRC_STRING) $(SRC_PRINTF)

BONUS = src/list/ft_lstnew_bonus.c \
		src/list/ft_lstadd_front_bonus.c \
		src/list/ft_lstsize_bonus.c \
		src/list/ft_lstlast_bonus.c \
		src/list/ft_lstadd_back_bonus.c \
		src/list/ft_lstdelone_bonus.c \
		src/list/ft_lstclear_bonus.c \
		src/list/ft_lstiter_bonus.c \
		src/list/ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJ)

.PHONY: all clean fclean re bonus
