/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 01:25:48 by mgill             #+#    #+#             */
/*   Updated: 2018/03/18 01:30:33 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	if (str[i] != c && str[i] != '\0')
		words++;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}
