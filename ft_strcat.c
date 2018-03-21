/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 23:06:14 by mgill             #+#    #+#             */
/*   Updated: 2018/03/06 19:40:46 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int dlength;
	int i;

	dlength = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dlength + i] = src[i];
		i++;
	}
	dest[dlength + i] = '\0';
	return (dest);
}
