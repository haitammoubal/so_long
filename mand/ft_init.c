/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:14:56 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 04:58:26 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(int width, int height, t_map *map)
{
	if (width == 0 || height == 0)
	{
		printf("error img");
		ft_close(map);
	}
}

void	ft_init(t_srcs *srcs, t_map *map)
{
	srcs->block = mlx_xpm_file_to_image(map->mlx, "srcs/block.xpm",
			&(srcs->width), &(srcs->height));
	ft_error(srcs->width, srcs->height, map);
	srcs->coll = mlx_xpm_file_to_image(map->mlx, "srcs/food.xpm",
			&(srcs->width), &(srcs->height));
	ft_error(srcs->width, srcs->height, map);
	srcs->player = mlx_xpm_file_to_image(map->mlx, "srcs/player.xpm",
			&(srcs->width), &(srcs->height));
	ft_error(srcs->width, srcs->height, map);
	srcs->exit = mlx_xpm_file_to_image(map->mlx, "srcs/exit.xpm",
			&(srcs->width), &(srcs->height));
	ft_error(srcs->width, srcs->height, map);
	srcs->land = mlx_xpm_file_to_image(map->mlx, "srcs/land.xpm",
			&(srcs->width), &(srcs->height));
	ft_error(srcs->width, srcs->height, map);
}
