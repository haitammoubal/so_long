/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 02:26:04 by hmoubal           #+#    #+#             */
/*   Updated: 2022/02/06 16:59:53 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close_error(t_map *map)
{
	ft_free(map, map->height);
	exit(1);
	return (0);
}

void	ft_next(t_map *map)
{
	ft_clear(map);
	ft_fillmap(map);
	ft_move(map);
}

void	ft_move(t_map *map)
{
	(map->moves) += 1;
	printf("%d\n", map->moves);
}
