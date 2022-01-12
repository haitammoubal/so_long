/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:09:18 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 18:49:24 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *line)
{
	if (!line)
	{
		ft_putstr("file unreadable");
		exit(0);
	}
	return ;
}

void	ft_fill_size(char *str, t_map *map)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open(str, O_RDWR);
	line = get_next_line(fd);
	ft_error(line);
	while (line)
	{
		map->height += 1;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	fd = open(str, O_RDWR);
	line = get_next_line(fd);
	ft_error(line);
	while (line[i] != '\0' && line[i] != '\n')
	{
		map->width += 1;
		i++;
	}
	free(line);
	close(fd);
}

int	ft_checksize(char *str, t_map *map)
{
	int		fd;
	char	*line;
	int		i;

	ft_fill_size(str, map);
	fd = open(str, O_RDWR);
	line = get_next_line(fd);
	ft_error(line);
	while (line)
	{
		i = 0;
		while (line[i] != '\0' && line[i] != '\n')
			i++;
		if (i > map->width || i < map->width)
		{
			ft_putstr("invalid map");
			free(line);
			return (0);
		}
		free(line);
		line = get_next_line(fd);
	}
	close (fd);
	return (1);
}
