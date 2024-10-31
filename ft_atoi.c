/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:26:18 by duha              #+#    #+#             */
/*   Updated: 2024/10/31 10:58:48 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*nptr == 32 || (9 <= *nptr && *nptr <= 13)) //isspace
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + (*nptr - 48);
		nptr++;
	}
	return (num*sign);
}
int main(void)
{
	printf("Input 123: %i, %i\n", ft_atoi("123"), atoi("123"));
	printf("Input -123: %i, %i\n", ft_atoi("-123"), atoi("-123"));
	printf("Input +123: %i, %i\n", ft_atoi("+123"), atoi("+123"));
	printf("Input -+1234: %i, %i\n", ft_atoi("-+1234"), atoi("-+1234"));
	printf("Input +-1234: %i, %i\n", ft_atoi("+-1234"), atoi("+-1234"));
	printf("Input ---1234: %i, %i\n", ft_atoi("---1234"), atoi("---1234"));
	printf("Input    1234: %i, %i\n", ft_atoi("   1234"), atoi("   1234"));
	printf("Input 1234aa5    : %i, %i\n", ft_atoi("1234aa5    "), atoi("1234aa5    "));
}
