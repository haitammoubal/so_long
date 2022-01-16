/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksize_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:35:22 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/15 19:33:49 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_checkif(t_map *map, int j, int i)
{
	if (map->map[j][0] != '1' || (map->map[j][i] != '1'
		&& map->map[j][i + 1] == '\0')
		|| (map->map[j][i] != '1' && map->map[j][i] != '0'
		&& map->map[j][i] != 'C' && map->map[j][i] != 'P'
		&& map->map[j][i] != 'E'
		&& map->map[j][i] != 'N'))
		return (0);
	return (1);
}

void	ft_while(t_map *map, char *line, int t)
{
	int	i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
	{
		if (t != 0)
			break ;
		map->width += 1;
		i++;
	}
}

void	ft_fill_size(char *str, t_map *map)
{
	int		fd;
	char	*line;
	int		i;
	int		t;

	i = 0;
	t = 0;
	fd = open(str, O_RDWR);
	if (fd < 0)
	{
		ft_putstr("file unreadable");
		exit(0);
	}
	line = get_next_line(fd);
	while (line)
	{
		map->height += 1;
		ft_while(map, line, t);
		free(line);
		line = get_next_line(fd);
		t = 1;
	}
}

int	ft_checksize(char *str, t_map *map)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open(str, O_RDWR);
	if (fd < 0)
	{
		ft_putstr("file unreadable");
		exit(0);
	}
	line = get_next_line(fd);
	while (line)
	{
		i = 0;
		while (line[i] != '\0' && line[i] != '\n')
			i++;
		if (i != map->width)
		{
			ft_putstr("invalid map");
			return (0);
		}
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (1);
}
