/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:38:03 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 06:54:28 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

/**
 * ft_itoa - Allocates (with malloc(3)) and returns a string representing the
 *           integer received as an argument. Negative numbers must be handled.
 *
 * @n: the integer to convert.
 *
 * Return: The string representing the integer.
 *         NULL if the allocation fails.
 */

static size_t	ft_count_digit(int n);

char	*ft_itoa(int n)
{
	char	*p;
	size_t	len;

	len = ft_count_digit(n);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (n == 0)
		p[0] = '0';
	if (n == INT_MIN)
		ft_memcpy(p, "-2147483648", 12);
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	len -= 1;
	while (n > 0)
	{
		p[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}
/* static size_t	ft_count_digit(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	main(void)
{
	int a = INT_MIN;
	int b = a;
	printf("%d %s\n", b, ft_itoa(b));
} */
