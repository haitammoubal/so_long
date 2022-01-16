/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:14:56 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 14:47:55 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_error(int width, int height, t_map *map)
{
	if (width == 0 || height == 0)
	{
		printf("error img");
		ft_close(map);
	}
}

void	ft_init(t_map *map)
{
	map->block = mlx_xpm_file_to_image(map->mlx, "srcs/block.xpm",
			&(map->img_width), &(map->img_height));
	ft_error(map->img_width, map->img_height, map);
	map->coll = mlx_xpm_file_to_image(map->mlx, "srcs/food.xpm",
			&(map->img_width), &(map->img_height));
	ft_error(map->img_width, map->img_height, map);
	map->player = mlx_xpm_file_to_image(map->mlx, "srcs/player.xpm",
			&(map->img_width), &(map->img_height));
	ft_error(map->img_width, map->img_height, map);
	map->exit = mlx_xpm_file_to_image(map->mlx, "srcs/exit.xpm",
			&(map->img_width), &(map->img_height));
	ft_error(map->img_width, map->img_height, map);
	map->land = mlx_xpm_file_to_image(map->mlx, "srcs/land.xpm",
			&(map->img_width), &(map->img_height));
	ft_error(map->img_width, map->img_height, map);
	map->enemy = mlx_xpm_file_to_image(map->mlx, "srcs/enemy.xpm",
			&(map->img_width), &(map->img_height));
	ft_error(map->img_width, map->img_height, map);
}
