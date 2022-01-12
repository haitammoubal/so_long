/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 22:01:13 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 20:41:28 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
		if (ft_checkmap(av[1], &more) == 0)
			return (0);
		if (ft_checksize(av[1], &map) == 0)
			return (0);
		ft_fill(av[1], &map);
		map.mlx = mlx_init();
		map.win = mlx_new_window(map.mlx, map.width * 100,
				map.height * 100, "so_long");
		ft_fillmap(&srcs, &map);
		mlx_hook(map.win, 2, 0, &key_hook, &map);
		mlx_hook(map.win, 17, 0, &ft_close, NULL);
		mlx_loop(map.mlx);
	}
	else
		perror("ERROR ");
}
