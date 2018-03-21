/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 01:07:36 by mgill             #+#    #+#             */
/*   Updated: 2018/03/06 19:49:24 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	ch;

	i = 0;
	p = (unsigned char *)str;
	ch = (unsigned char)c;
	while (n--)
	{
		if (p[i] == ch)
			return (p + i);
		i++;
	}
	return (NULL);
}
