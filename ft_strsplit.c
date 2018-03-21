/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 21:18:16 by mgill             #+#    #+#             */
/*   Updated: 2018/03/20 02:38:58 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_substrsplit(char const *s, char c, char **res, int letters)
{
	int		index;
	int		subindex;

	index = 0;
	subindex = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (s[letters] != c && s[letters])
				letters++;
			res[index] = ft_strnew((size_t)letters);
			while (letters > 0)
			{
				res[index][subindex++] = *s++;
				letters--;
			}
			subindex = 0;
			index++;
		}
		if (*s == c)
			s++;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		letters;
	size_t	size;

	if (!s)
		return (NULL);
	letters = 0;
	size = ft_countwords(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	res[size] = 0;
	ft_substrsplit(s, c, res, letters);
	return (res);
}
