/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 01:19:57 by mgill             #+#    #+#             */
/*   Updated: 2018/03/20 02:55:48 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	begin;
	size_t	b;
	size_t	l;

	if (lil[0] == '\0')
		return ((char *)big);
	begin = 0;
	b = 0;
	while (big[b] != '\0' && b < len)
	{
		begin = b;
		l = 0;
		while (b < len && big[b] == lil[l])
		{
			b++;
			l++;
			if (lil[l] == '\0')
				return ((char *)&big[begin]);
		}
		b = begin;
		b++;
	}
	return (0);
}
