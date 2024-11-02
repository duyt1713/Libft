/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:26:18 by duha              #+#    #+#             */
/*   Updated: 2024/11/02 13:19:32 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//complile with the -I flag to include the libft.h header file, look into this later

#include "libft.h"

int	ft_isspace(int c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + (*nptr - '0');
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
