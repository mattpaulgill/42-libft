/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 00:22:17 by mgill             #+#    #+#             */
/*   Updated: 2018/03/19 23:24:05 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dstr, const void *sstr, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dstr;
	s = (char *)sstr;
	i = n;
	if (sstr < dstr)
	{
		while (i-- > 0)
		{
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
