/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 16:04:51 by mgill             #+#    #+#             */
/*   Updated: 2018/03/06 19:39:00 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t src_len;
	size_t space_avail;
	size_t i;
	size_t j;

	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	if (size <= (size_t)ft_strlen(dest))
		return (size + src_len);
	while (dest[i] && i < size)
		i++;
	space_avail = i;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (space_avail < size)
		dest[i] = '\0';
	return (src_len + space_avail);
}
