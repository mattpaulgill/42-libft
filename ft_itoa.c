/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 19:23:09 by mgill             #+#    #+#             */
/*   Updated: 2018/03/19 22:05:11 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_seta(char *str, int nc, int i)
{
	while (nc > 0)
	{
		str[i] = (nc % 10) + '0';
		nc /= 10;
		i--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		nc;

	if (!(str = (char *)malloc(sizeof(char))))
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nc = n;
	if (n < 0)
		nc = -n;
	i = ft_intlength(nc);
	str = ft_strnew(i + ft_isnegative(n));
	if (ft_isnegative(n))
	{
		str[0] = '-';
		i++;
	}
	i--;
	return (ft_seta(str, nc, i));
}
