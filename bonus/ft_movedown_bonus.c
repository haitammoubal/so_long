/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movedown_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 03:35:08 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 14:43:21 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_movedown_enemy(t_map *map, int *i, int *j)
{
	if (map->map[*i + 1][*j] == 'N')
	{
		ft_putstr("YOU LOSE");
		ft_close(map);
	}
	return ;
}

void	ft_movedown2(t_map *map, int *i, int *j)
{
	if (map->map[*i + 1][*j] == '0')
	{
		map->map[*i + 1][*j] = 'P';
		map->map[*i][*j] = '0';
		ft_next(map);
	}
	else if (map->map[*i + 1][*j] == 'C')
	{
		map->map[*i + 1][*j] = 'P';
		map->map[*i][*j] = '0';
		ft_next(map);
	}
	else if (map->map[*i + 1][*j] == 'E')
	{
		if (ft_check_collect(map) == 0)
		{
			ft_move(map);
			ft_putstr("YOU WIN");
			ft_close(map);
		}
	}
	ft_movedown_enemy(map, i, j);
	return ;
}

void	ft_movedown(t_map	*map)
{
	int	i;
	int	j;

	i = 0;
	while (map->map[i] != NULL)
	{
		j = 0;
		while (map->map[i][j] != '\0')
		{
			if (map->map[i][j] == 'P')
			{
				ft_movedown2(map, &i, &j);
				return ;
			}
			j++;
		}
		i++;
	}
}
