/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 19:05:44 by mgill             #+#    #+#             */
/*   Updated: 2018/03/06 23:51:52 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (0);
}
