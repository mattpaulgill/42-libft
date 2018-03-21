/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 21:11:41 by mgill             #+#    #+#             */
/*   Updated: 2018/03/13 13:05:35 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!(str = (char *)malloc(sizeof(char))) || !s)
		return (NULL);
	if (*s == '\0' || !s)
		return (str);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (s[i])
		i++;
	while ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n') && i)
		i--;
	if (!(str = ft_strnew(i)))
		return (NULL);
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	return (str);
}
