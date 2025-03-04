/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:26:18 by duha              #+#    #+#             */
/*   Updated: 2025/01/13 12:46:22 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_atoi - Converts a string to an integer.
 *
 * @nptr: The string to be converted.
 *
 * This function converts the initial portion of the string pointed to by nptr
 * to int representation. It discards any whitespace characters until the first
 * non-whitespace character is found. Then, it takes an optional initial plus
 * or minus sign followed by as many numerical digits as possible, and converts
 * them to an integer.
 *
 * Return: The converted integer.
 */
int	ft_atoi(const char *nptr)
{
	int			sign;
	long long	num;
	long long	check;

	sign = 1;
	num = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (ft_issign(*nptr))
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		check = num * 10 + (*nptr - '0');
		if (check / 10 != num && sign == 1)
			return (-1);
		if (check / 10 != num && sign == -1)
			return (0);
		num = check;
		nptr++;
	}
	return ((int)(num * sign));
}
