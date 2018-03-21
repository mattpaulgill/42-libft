/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 00:24:46 by mgill             #+#    #+#             */
/*   Updated: 2018/03/20 02:39:29 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	int		length;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = start;
	length = (int)len;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (i < length)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	return (str);
}
