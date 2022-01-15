/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:04:48 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 00:48:21 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_ber(char *str)
{
	if (ft_search(str, ".ber") == 0)
	{
		ft_putstr("map extansion is not .ber");
		return (0);
	}
	return (1);
}

void	ft_clear(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
}
