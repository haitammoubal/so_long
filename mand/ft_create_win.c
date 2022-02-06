/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_win.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:19:56 by hmoubal           #+#    #+#             */
/*   Updated: 2022/02/06 16:29:47 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_create_win(t_map *map)
{
	map->mlx = mlx_init();
	if (map->mlx == NULL)
		return (1);
	map->win = mlx_new_window(map->mlx, map->width * 100,
			map->height * 100, "so_long");
	return (0);
}
