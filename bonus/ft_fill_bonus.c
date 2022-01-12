/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:06:44 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 20:42:21 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_fill(char *str, t_map	*map)
{
	int		i;
	int		fd;
	char	*line;

	fd = open(str, O_RDWR);
	i = 0;
	map->map = (char **)malloc(sizeof(char *) * (map->height + 1));
	line = get_next_line(fd);
	while (line)
	{
		map->map[i] = (char *)malloc(sizeof(char) * (map->width + 1));
		map->map[i] = ft_memcpy(map->map[i], line, map->width);
		map->map[i][map->width] = '\0';
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close (fd);
	map->map[i] = NULL;
}
