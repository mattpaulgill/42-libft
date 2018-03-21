/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 23:57:13 by mgill             #+#    #+#             */
/*   Updated: 2018/03/10 01:34:13 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char *begin;
	char *begin_find;

	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		begin = (char *)str;
		begin_find = (char *)to_find;
		if (*str == *to_find)
		{
			while (*str && *to_find && *to_find == *str)
			{
				str++;
				to_find++;
			}
			if (!*to_find)
				return (begin);
			else
				to_find = begin_find;
		}
		str = begin + 1;
	}
	return (0);
}
