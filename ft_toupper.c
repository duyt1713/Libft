/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:38 by duha              #+#    #+#             */
/*   Updated: 2024/11/03 13:58:15 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	else return (c);
}
