/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:19:55 by duha              #+#    #+#             */
/*   Updated: 2024/11/03 13:59:46 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
