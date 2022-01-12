/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 02:26:04 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 21:57:31 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_move(t_map *map)
{
	char	*line;

	line = NULL;
	mlx_string_put(map->mlx, map->win, 10, 30, 10, "moves:");
	(map->moves) += 1;
	line = ft_itoa(map->moves);
	mlx_string_put(map->mlx, map->win, 70, 30, 10, line);
}
