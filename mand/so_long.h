/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:00:03 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 21:43:16 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

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
	void	*player;
	void	*block;
	void	*coll;
	void	*exit;
	void	*land;
	int		img_width;
	int		img_height;
	int		width;
	int		height;
}t_map;

typedef struct s_cont
{
	int	collect;
	int	player;
	int	exit;
}t_cont;

int		ft_search(char *str, char *little);
int		ft_checkmap(t_map *map, t_cont *more);
int		ft_checksize(char *str, t_map *map);
int		key_hook(int keycode, t_map *map);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
void	ft_movedown(t_map	*map);
void	ft_movedown2(t_map *map, int *i, int *j);
void	ft_moveup(t_map	*map);
void	ft_moveup2(t_map *map, int *i, int *j);
void	ft_moveleft(t_map	*map);
void	ft_moveleft2(t_map *map, int *i, int *j);
void	ft_moveright(t_map	*map);
void	ft_moveright2(t_map *map, int *i, int *j);
void	ft_keyhook(t_map *map, int i);
void	ft_fillmap(t_map *map);
int		ft_fill(char *str, t_map	*map);
void	*ft_memcpy(void *dest,	const void *src,	size_t size);
void	ft_init(t_map *map);
int		ft_check_collect(t_map *map);
char	*ft_strdup(const char *src);
void	ft_move(t_map *map);
void	ft_fillmap2(t_map *map, int x, int y);
void	ft_init2(t_map *map, t_cont *more);
int		ft_check_inside(t_map *map, t_cont *more, int k);
int		ft_checkwall(t_map *map, int j);
int		ft_countline(t_map *map);
int		ft_check(int j, t_map *map, t_cont *more);
void	ft_fill_size(char *str, t_map *map);
void	ft_free(t_map *map, int map_height);
int		ft_checkif(t_map *map, int i, int j);
void	ft_count(t_map *map, t_cont *more, int i, int j);
int		ft_so_long(t_map *map);
int		ft_close(t_map *map);
void	ft_clear(t_map *map);
int		ft_ber(char *str);
void	ft_create_win(t_map *map);
void	ft_next(t_map *map);
int		ft_ifchecks(char *str, t_map *map, t_cont *more);
void	ft_error(int width, int height, t_map *map);
void	ft_file(void);
#endif
