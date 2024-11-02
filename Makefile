# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duha <duha@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 19:45:39 by duha              #+#    #+#              #
#    Updated: 2024/11/02 13:31:31 by duha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

*Not complete don't look*

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all
