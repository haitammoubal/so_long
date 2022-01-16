/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifchecks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:50:50 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 00:37:24 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_ifchecks(char *str, t_map *map, t_cont *more)
{
	if (ft_checksize(str, map) == 0)
	{
		exit(1);
		return (0);
	}
	if (ft_fill(str, map) == 0)
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
