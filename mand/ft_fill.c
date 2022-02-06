/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:06:44 by hmoubal           #+#    #+#             */
/*   Updated: 2022/02/06 16:56:47 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_fill2(t_map *map, int i, char *line)
{
	map->map[i] = (char *)malloc(sizeof(char) * (map->width + 1));
	if (map->map[i] == NULL)
	{
		ft_free(map, i);
		return (0);
	}
	map->map[i] = ft_memcpy(map->map[i], line, map->width);
	map->map[i][map->width] = '\0';
	return (1);
}

int	ft_fill(char *str, t_map	*map)
{
	int		i;
	int		fd;
	char	*line;

	fd = open(str, O_RDWR);
	if (fd < 0)
		ft_file();
	i = 0;
	map->map = (char **)malloc(sizeof(char *) * (map->height + 1));
	if (map->map == NULL)
		return (0);
	line = get_next_line(fd);
	while (line)
	{
		ft_fill2(map, i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close (fd);
	map->map[i] = NULL;
	return (1);
}
