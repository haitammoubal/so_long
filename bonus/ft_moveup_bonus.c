/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moveup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 03:33:16 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/12 02:18:45 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_moveup_enemy(t_map *map, int *i, int *j)
{
	if (map->map[*i - 1][*j] == 'N')
	{
		ft_putstr("YOU LOSE");
		exit(1);
	}
	return ;
}

void	ft_moveup2(t_map *map, t_srcs *srcs, int *i, int *j)
{
	if (map->map[*i - 1][*j] == '0')
	{
		map->map[*i - 1][*j] = 'P';
		map->map[*i][*j] = '0';
		ft_fillmap(srcs, map);
		ft_move(map);
	}
	else if (map->map[*i - 1][*j] == 'C')
	{
		map->map[*i - 1][*j] = 'P';
		map->map[*i][*j] = '0';
		ft_fillmap(srcs, map);
		ft_move(map);
	}
	else if (map->map[*i - 1][*j] == 'E')
	{
		if (ft_check_collect(map) == 0)
		{
			ft_move(map);
			ft_putstr("YOU WIN");
			exit(1);
		}
	}
	ft_moveup_enemy(map, i, j);
	return ;
}

void	ft_moveup(t_srcs *srcs, t_map	*map)
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
				ft_moveup2(map, srcs, &i, &j);
				return ;
			}
			j++;
		}
		i++;
	}
}
