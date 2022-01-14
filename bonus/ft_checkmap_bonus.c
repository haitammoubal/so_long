/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:11:07 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/14 21:15:36 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_check(int j, t_map *map, t_cont *more)
{
	if (ft_check_inside(map, more, j) == 0)
		return (0);
	if (more->player != 1 || more->collect < 1 || more->exit < 1)
	{
		ft_putstr("invalid map");
		return (0);
	}
	return (1);
}

int	ft_countline(t_map *map)
{
	int		j;

	j = 0;
	while (map->map[j] != NULL)
	{
		j++;
	}
	return (j);
}

int	ft_checkwall(t_map *map, int j)
{
	int	i;

	i = 0;
	if (j > 0)
		j--;
	while (map->map[j][i] != '\0')
	{
		if (map->map[j][i] != 49)
		{
			ft_putstr("invalid map");
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_inside(t_map *map, t_cont *more, int k)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < k)
	{
		while (map->map[j][i] != '\0')
		{
			if (ft_checkif(map, j, i) == 0)
			{
				ft_putstr("invalid map");
				return (0);
			}
			ft_fill2(map, more, j, i);
			i++;
		}
		j++;
		i = 0;
	}
	return (1);
}

int	ft_checkmap(t_map *map, t_cont *more)
{
	int		j;

	j = 0;
	if (ft_checkwall(map, j) == 0)
		return (0);
	j = ft_countline(map);
	if (ft_check(j, map, more) == 0)
		return (0);
	if (ft_checkwall(map, j) == 0)
		return (0);
	return (1);
}
