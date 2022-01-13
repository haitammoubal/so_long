/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:14:56 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/12 16:45:40 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_init(t_srcs *srcs, t_map *map)
{
	srcs->block = mlx_xpm_file_to_image(map->mlx, "srcs/block.xpm",
			&(srcs->width), &(srcs->height));
	srcs->coll = mlx_xpm_file_to_image(map->mlx, "srcs/food.xpm",
			&(srcs->width), &(srcs->height));
	srcs->player = mlx_xpm_file_to_image(map->mlx, "srcs/player.xpm",
			&(srcs->width), &(srcs->height));
	srcs->exit = mlx_xpm_file_to_image(map->mlx, "srcs/exit.xpm",
			&(srcs->width), &(srcs->height));
	srcs->land = mlx_xpm_file_to_image(map->mlx, "srcs/land.xpm",
			&(srcs->width), &(srcs->height));
	srcs->enemy = mlx_xpm_file_to_image(map->mlx, "srcs/enemy.xpm",
			&(srcs->width), &(srcs->height));
}
