/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:38 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:30:33 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_toupper - Converts a lowercase letter to an uppercase letter.
 *
 * @c: The character to be converted.
 *
 * This function converts a lowercase letter to the corresponding
 * uppercase letter. If the character is not a lowercase letter,
 * it is returned unchanged.
 *
 * Return: The uppercase equivalent of the character if it is a
 *         lowercase letter, otherwise the character itself.
 */
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	else
		return (c);
}
