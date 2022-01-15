/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 02:26:04 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 01:01:05 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_next(t_map *map, t_srcs *srcs)
{
	ft_clear(map);
	ft_fillmap(srcs, map);
	ft_move(map);
}

void	ft_move(t_map *map)
{
	(map->moves) += 1;
	printf("%d\n", map->moves);
}
