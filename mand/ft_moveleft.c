/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moveleft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 03:35:01 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 04:15:30 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_moveleft2(t_map *map, t_srcs *srcs, int *i, int *j)
{
	if (map->map[*i][*j - 1] == '0')
	{
		map->map[*i][*j - 1] = 'P';
		map->map[*i][*j] = '0';
		ft_fillmap(srcs, map);
		ft_move(map);
	}
	else if (map->map[*i][*j - 1] == 'C')
	{
		map->map[*i][*j - 1] = 'P';
		map->map[*i][*j] = '0';
		ft_fillmap(srcs, map);
		ft_move(map);
	}
	else if (map->map[*i][*j - 1] == 'E')
	{
		if (ft_check_collect(map) == 0)
		{
			ft_move(map);
			ft_putstr("YOU WIN");
			exit(1);
		}
	}
	return ;
}

void	ft_moveleft(t_srcs *srcs, t_map	*map)
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
				ft_moveleft2(map, srcs, &i, &j);
				return ;
			}
			j++;
		}
		i++;
	}
}
