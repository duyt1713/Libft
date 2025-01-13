/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:19:55 by duha              #+#    #+#             */
/*   Updated: 2025/01/13 11:48:05 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_isalpha - Checks if the given character is an alphabetic letter.
 *
 * @c: The character to be checked.
 *
 * This function checks if the given character is an alphabetic letter,
 * either uppercase (A-Z) or lowercase (a-z). It uses the ft_isupper
 * function to check for uppercase letters and the ft_islower function
 * to check for lowercase letters.
 *
 * Return: non-zero if the character is an alphabetic letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
