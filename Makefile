# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duha <duha@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:45:39 by duha              #+#    #+#              #
#    Updated: 2024/10/29 20:27:34 by duha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all
