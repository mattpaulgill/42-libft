/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 04:24:16 by mgill             #+#    #+#             */
/*   Updated: 2018/03/18 20:20:05 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *next;

	if (alst && del)
	{
		temp = *alst;
		while (temp)
		{
			next = temp->next;
			del(temp->content, temp->content_size);
			free(temp);
			temp = next;
		}
	}
	*alst = NULL;
}
