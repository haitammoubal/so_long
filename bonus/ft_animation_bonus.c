/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animation_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:42:45 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 00:41:52 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_animation(t_map *map, t_srcs *srcs)
{
	if (map->k < 10)
	{
		srcs->player = mlx_xpm_file_to_image(map->mlx, "srcs/player.xpm",
				&(srcs->width), &(srcs->height));
		ft_fillmap(srcs, map);
		(map->k)++;
	}
	else if (map->k < 20)
	{
		srcs->player = mlx_xpm_file_to_image(map->mlx, "srcs/player2.xpm",
				&(srcs->width), &(srcs->height));
		ft_clear(map, srcs);
		ft_fillmap(srcs, map);
		(map->k)++;
	}
	// else
	// {
	// 	srcs->player = mlx_xpm_file_to_image(map->mlx, "srcs/player.xpm",
	// 			&(srcs->width), &(srcs->height));
	// 	ft_clear(map, srcs);
	// 	ft_fillmap(srcs, map);
	// 	map->k = 0;
	// }
	return (0);
}
