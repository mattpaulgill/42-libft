/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 15:43:26 by mgill             #+#    #+#             */
/*   Updated: 2018/03/06 19:42:15 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		dlength;
	size_t	i;

	dlength = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[dlength + i] = src[i];
		i++;
	}
	dest[dlength + i] = '\0';
	return (dest);
}
