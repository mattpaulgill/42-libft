/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 02:13:32 by mgill             #+#    #+#             */
/*   Updated: 2018/03/18 03:14:59 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	if (!(link = (t_list *)malloc(sizeof(*link))))
		return (NULL);
	if (!content)
	{
		link->content_size = 0;
		link->content = NULL;
	}
	else
	{
		if (!(link->content = malloc(content_size)))
		{
			free(link);
			return (NULL);
		}
		link->content_size = content_size;
		ft_memcpy(link->content, content, content_size);
	}
	link->next = NULL;
	return (link);
}
