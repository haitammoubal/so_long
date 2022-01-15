/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifchecks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:50:50 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 00:53:35 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_ifchecks(char *str, t_map *map, t_cont *more)
{
	if (ft_fill(str, map) == 0)
	{
		ft_close(map);
		return (0);
	}
	if (ft_checksize(map) == 0)
	{
		ft_close(map);
		return (0);
	}
	if (ft_checkmap(map, more) == 0)
	{
		ft_close(map);
		return (0);
	}
	return (1);
}
