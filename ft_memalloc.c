/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:14:17 by mgill             #+#    #+#             */
/*   Updated: 2018/03/12 20:24:26 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (void *)malloc(sizeof(ptr) * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
