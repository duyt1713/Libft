# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duha <duha@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:45:39 by duha              #+#    #+#              #
#    Updated: 2024/11/12 01:43:16 by duha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_atoi.c \
		ft_isalpha.c \
		ft_itoa.c \
		ft_memmove.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memchr.c \
		ft_memset.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_calloc.c \
		ft_isdigit.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_putendl_fd.c \
		ft_split.c \
		ft_strdup.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $^

.PHONY: all clean fclean re bonus
