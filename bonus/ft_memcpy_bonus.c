/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:39:08 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 20:42:08 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	*ft_memcpy(void *dest,	const void *src,	size_t size)
{
	char	*p1;
	char	*p2;
	int		i;

	p1 = dest;
	p2 = (char *)src;
	if (!p1 && !p2)
		return (NULL);
	i = 0;
	while (size != 0)
	{
		p1[i] = p2[i];
		i++;
		size--;
	}
	return (dest);
}
