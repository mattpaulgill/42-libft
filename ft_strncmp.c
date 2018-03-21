/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 22:54:01 by mgill             #+#    #+#             */
/*   Updated: 2018/03/10 01:43:42 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 && *str2 && *str1 == *str2 && n)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((int)((unsigned char)*str1 - (unsigned char)*str2));
}
