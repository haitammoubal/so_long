/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moveup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 03:33:16 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 14:42:28 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_moveup_enemy(t_map *map, int *i, int *j)
{
	if (map->map[*i - 1][*j] == 'N')
	{
		ft_putstr("YOU LOSE");
		ft_close(map);
	}
	return ;
}

void	ft_moveup2(t_map *map, int *i, int *j)
{
	if (map->map[*i - 1][*j] == '0')
	{
		map->map[*i - 1][*j] = 'P';
		map->map[*i][*j] = '0';
		ft_next(map);
	}
	else if (map->map[*i - 1][*j] == 'C')
	{
		map->map[*i - 1][*j] = 'P';
		map->map[*i][*j] = '0';
		ft_next(map);
	}
	else if (map->map[*i - 1][*j] == 'E')
	{
		if (ft_check_collect(map) == 0)
		{
			ft_move(map);
			ft_putstr("YOU WIN");
			ft_close(map);
		}
	}
	ft_moveup_enemy(map, i, j);
	return ;
}

void	ft_moveup(t_map	*map)
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
				ft_moveup2(map, &i, &j);
				return ;
			}
			j++;
		}
		i++;
	}
}
