/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:09:18 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 20:47:49 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_count(t_map *map, t_cont *more, int i, int j)
{
	if (map->map[j][i] == 'E')
		more->exit += 1;
	else if (map->map[j][i] == 'P')
		more->player += 1;
	else if (map->map[j][i] == 'C')
		more->collect += 1;
}

int	ft_checkif(t_map *map, int i, int j)
{
	if (map->map[j][0] != '1' || (map->map[j][i] != '1'
		&& map->map[j][i + 1] == '\0')
		|| (map->map[j][i] != '1' && map->map[j][i] != '0'
		&& map->map[j][i] != 'C' && map->map[j][i] != 'P'
		&& map->map[j][i] != 'E'))
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
		ft_file();
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
