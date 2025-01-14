/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:26:48 by duha              #+#    #+#             */
/*   Updated: 2025/01/14 16:49:33 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <limits.h>

/**
 * ft_atol - Converts a string to a long integer.
 *
 * @nptr: The string to be converted.
 *
 * This function converts the initial portion of the string pointed to by nptr
 * to long representation. It discards any whitespace characters until the first
 * non-whitespace character is found. Then, it takes an optional initial plus
 * or minus sign followed by as many numerical digits as possible, and converts
 * them to a long integer.
 *
 * Return: The converted long integer,
 *         or LONG_MAX/LONG_MIN on overflow/underflow.
 */
long	ft_atol(const char *nptr)
{
	int		sign;
	long	num;
	long	check;

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
			return (LONG_MAX);
		if (check / 10 != num && sign == -1)
			return (LONG_MIN);
		num = check;
		nptr++;
	}
	return (num * sign);
}
