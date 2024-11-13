/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:39:45 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:38:04 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * ft_putchar_fd - Outputs the character ’c’ to the given file descriptor.
 *
 * @c:  The character to output.
 * @fd: The file descriptor on which to write.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
