/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:00:03 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 21:59:03 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <mlx.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map
{
	char	**map;
	void	*mlx;
	void	*win;
	int		moves;
	int		i;
	int		j;
	int		width;
	int		height;
}t_map;

typedef struct s_cont
{
	int	collect;
	int	player;
	int	exit;
	int	wall;
}t_cont;

typedef struct s_srcs
{
	void	*player;
	void	*block;
	void	*coll;
	void	*exit;
	void	*land;
	int		width;
	int		height;
}t_srcs;

int		ft_search(char *str, char *little);
int		ft_checkmap(char *str, t_cont *more);
int		ft_checksize(char *str, t_map *map);
int		key_hook(int keycode, t_map *map);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
void	ft_movedown(t_srcs *srcs, t_map	*map);
void	ft_movedown2(t_map *map, t_srcs *srcs, int *i, int *j);
void	ft_moveup(t_srcs *srcs, t_map	*map);
void	ft_moveup2(t_map *map, t_srcs *srcs, int *i, int *j);
void	ft_moveleft(t_srcs *srcs, t_map	*map);
void	ft_moveleft2(t_map *map, t_srcs *srcs, int *i, int *j);
void	ft_moveright(t_srcs *srcs, t_map	*map);
void	ft_moveright2(t_map *map, t_srcs *srcs, int *i, int *j);
void	ft_keyhook(t_srcs *srcs, t_map *map, int i);
void	ft_fillmap(t_srcs *srcs, t_map *map);
void	ft_fill(char *str, t_map	*map);
void	*ft_memcpy(void *dest,	const void *src,	size_t size);
void	ft_init(t_srcs *srcs, t_map *map);
int		ft_check_collect(t_map *map);
char	*ft_strdup(const char *src);
void	ft_move(t_map *map);
void	ft_fillmap2(t_map *map, t_srcs *srcs, int x, int y);
void	ft_init2(t_map *map, t_cont *more);
void	ft_error(char *line);
int		ft_check_inside(char **line, t_cont *more);
int		ft_checkwall(char **line, t_cont *more);
int		ft_countline(char *str);
int		ft_check(int j, int fd, char **line, t_cont *more);
char	*ft_itoa(int n);
int		calc_size(long int n);
char	*sep_num(char *str,	int n,	int size);
#endif
