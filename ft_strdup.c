/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 17:31:14 by mgill             #+#    #+#             */
/*   Updated: 2018/03/02 20:07:41 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;

	new = (char *)malloc(sizeof(*new) * (ft_strlen(src) + 1));
	if (new == NULL)
		return (NULL);
	return (ft_strcpy(new, src));
}
