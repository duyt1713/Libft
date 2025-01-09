/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:23:11 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:31:39 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <unistd.h>

/**
 * ft_print_char - Writes a single character to the standard output.
 *
 * @c: The character to be written.
 *
 * This function writes the given character to the standard output
 * (file descriptor 1) using the write system call.
 *
 * Return: The number of bytes written, which is 1 on success, or -1 on error.
 */
int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}
