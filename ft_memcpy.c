/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:32:49 by mgill             #+#    #+#             */
/*   Updated: 2018/03/02 01:03:17 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str1)[i] = ((unsigned const char *)str2)[i];
		i++;
	}
	return (str1);
}
