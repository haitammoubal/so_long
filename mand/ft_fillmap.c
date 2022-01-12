/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:07:36 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 04:35:11 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fillmap2(t_map *map, t_srcs *srcs, int x, int y)
{
	if (map->map[map->i][map->j] == '1')
		mlx_put_image_to_window(map->mlx, map->win, srcs->block, x, y);
	else if (map->map[map->i][map->j] == 'C')
		mlx_put_image_to_window(map->mlx, map->win, srcs->coll, x, y);
	else if (map->map[map->i][map->j] == 'P')
		mlx_put_image_to_window(map->mlx, map->win, srcs->player, x, y);
	else if (map->map[map->i][map->j] == 'E')
		mlx_put_image_to_window(map->mlx, map->win, srcs->exit, x, y);
	else if (map->map[map->i][map->j] == '0')
		mlx_put_image_to_window(map->mlx, map->win, srcs->land, x, y);
}

void	ft_fillmap(t_srcs *srcs, t_map *map)
{
	int	x;
	int	y;

	map->i = 0;
	y = 0;
	ft_init(srcs, map);
	while (map->map[map->i] != NULL)
	{
		map->j = 0;
		x = 0;
		while (map->map[map->i][map->j] != '\0')
		{
			ft_fillmap2(map, srcs, x, y);
			x += 100;
			(map->j)++;
		}
		y += 100;
		(map->i)++;
	}
}
