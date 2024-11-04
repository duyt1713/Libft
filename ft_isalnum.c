/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:29:15 by duha              #+#    #+#             */
/*   Updated: 2024/11/03 23:27:44 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalnum - Checks if the given character is alphanumeric.
 * @c: The character to be checked.
 *
 * This function checks if the given character is either an alphabetic letter
 * (uppercase or lowercase) or a digit (0-9). It uses the ft_isalpha function
 * to check for alphabetic characters and the ft_isdigit function to check for
 * numeric characters.
 *
 * Return: non-zero if the character is alphanumeric, 0 otherwise.
 */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
