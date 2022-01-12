/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 03:11:07 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/12 02:01:40 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_check(int j, int fd, char **line, t_cont *more)
{
	while (j-- > 1)
	{
		if (ft_check_inside(line, more) == 0)
			return (0);
		if (j > 1)
		{
			free(*line);
			*line = get_next_line(fd);
		}
	}
	if (more->player != 1 || more->collect < 1 || more->exit < 1)
	{
		ft_putstr("invalid map");
		return (0);
	}
	return (1);
}

int	ft_countline(char *str)
{
	int		fd;
	char	*line;
	int		j;

	j = 0;
	fd = open(str, O_RDWR);
	line = get_next_line(fd);
	ft_error(line);
	while (line)
	{
		j++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (j);
}

int	ft_checkwall(char **line, t_cont *more)
{
	int	i;

	i = 0;
	while ((*line)[i] != '\0' && (*line)[i] != '\n')
	{
		if ((*line)[i] != 49)
		{
			ft_putstr("invalid map");
			free(*line);
			return (0);
		}
		more->wall += 1;
		i++;
	}
	free(*line);
	return (1);
}

int	ft_check_inside(char **line, t_cont *more)
{
	int	i;

	i = 0;
	while ((*line)[i] != '\0' && (*line)[i] != '\n')
	{
		if ((*line)[0] != '1' || ((*line)[i] != '1' && (*line)[i + 1] == '\n')
			|| ((*line)[i] != '1' && (*line)[i] != '0'
				&& (*line)[i] != 'C' && (*line)[i] != 'P' && (*line)[i] != 'E'
				&& (*line)[i] != 'N'))
		{
			ft_putstr("invalid map");
			free(*line);
			return (0);
		}
		if ((*line)[i] == 'E')
			more->exit += 1;
		else if ((*line)[i] == 'P')
			more->player += 1;
		else if ((*line)[i] == 'C')
			more->collect += 1;
		i++;
	}
	return (1);
}

int	ft_checkmap(char *str, t_cont *more)
{
	int		fd;
	char	*line;
	int		j;

	j = 0;
	if (ft_search(str, ".ber") == 0)
	{
		ft_putstr("map extansion is not .ber");
		return (0);
	}
	j = ft_countline(str);
	fd = open(str, O_RDWR);
	line = get_next_line(fd);
	ft_error(line);
	if (ft_checkwall(&line, more) == 0)
		return (0);
	line = get_next_line(fd);
	ft_error(line);
	if (ft_check(j, fd, &line, more) == 0)
		return (0);
	if (ft_checkwall(&line, more) == 0)
		return (0);
	return (1);
}
