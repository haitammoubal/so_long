/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 22:01:13 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/13 01:06:03 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->height)
	{
		free(map->map[i]);
		i++;
	}
	map->map = NULL;
}
int	key_hook(int keycode, t_map *map)
{
	t_srcs	srcs;

	ft_init(&srcs, map);
	ft_keyhook(&srcs, map, keycode);
	return (0);
}

int	ft_close(void)
{
	exit(1);
	return (0);
}

int	main(int ac, char **av)
{
	t_cont	more;
	t_map	map;
	t_srcs	srcs;

	if (ac == 2)
	{
		ft_init2(&map, &more);
		ft_fill(av[1], &map);
		if (ft_checkmap(av[1], &more) == 0)
			return (0);
		if (ft_checksize(av[1], &map) == 0)
			return (0);
		map.mlx = mlx_init();
		map.win = mlx_new_window(map.mlx, map.width * 100,
				map.height * 100, "so_long");
		ft_fillmap(&srcs, &map);
		mlx_hook(map.win, 2, 0, &key_hook, &map);
		mlx_hook(map.win, 17, 0, &ft_close, NULL);
		mlx_loop(map.mlx);
		ft_free(&map);
	}
	else
		perror("ERROR ");
}
