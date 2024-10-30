/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:45:45 by duha              #+#    #+#             */
/*   Updated: 2024/10/30 11:33:42 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h> //for size_t for now
#include <stdio.h> //testing purpose for printf

#include <ctype.h> //testing purpose
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);

#include <string.h> //testing purpose
size_t	ft_strlen(const char *s);

#endif
