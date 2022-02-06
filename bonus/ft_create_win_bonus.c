/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_win_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:19:56 by hmoubal           #+#    #+#             */
/*   Updated: 2022/02/06 16:33:19 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_create_win(t_map *map)
{
	map->mlx = mlx_init();
	if (map->mlx == NULL)
		return (1);
	map->win = mlx_new_window(map->mlx, map->width * 100,
			map->height * 100, "so_long");
	return (0);
}
