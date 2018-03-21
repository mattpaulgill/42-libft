/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intpower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 16:39:55 by mgill             #+#    #+#             */
/*   Updated: 2018/03/15 18:08:49 by mgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intpower(int base, int power)
{
	int result;
	int i;

	result = 1;
	i = 0;
	while (i < power)
	{
		result *= base;
		i++;
	}
	return (result);
}
