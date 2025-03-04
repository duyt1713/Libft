/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:59:25 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:31:46 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_print_hex_upper - Writes an unsigned integer in uppercase hexadecimal
 *                      format to the standard output.
 *
 * @num: The unsigned integer to be written.
 *
 * This function writes the given unsigned integer to the standard output
 * (file descriptor 1) in lowercase hexadecimal format. It recursively processes
 * each digit of the number by dividing the number by 16 and printing the
 * remainder using the characters '0'-'9' and 'A'-'F'.
 *
 * Return: The total number of characters printed.
 *         If an error occurs during printing, the function returns -1.
 */
int	ft_print_hex_upper(uintptr_t num)
{
	const char	*hex;
	int			count;
	int			check;

	hex = "0123456789ABCDEF";
	count = 0;
	if (num >= 16)
	{
		check = ft_print_hex_upper(num / 16);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_print_char(hex[num % 16]);
	if (check == -1)
		return (-1);
	return (count + 1);
}
