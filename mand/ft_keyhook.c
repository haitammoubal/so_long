/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyhook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 04:07:53 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/16 00:30:14 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_keyhook(t_map	*map, int i)
{
	if (i == 53)
		ft_close(map);
	else if (i == 13 || i == 126)
		ft_moveup(map);
	else if (i == 1 || i == 125)
		ft_movedown(map);
	else if (i == 0 || i == 123)
		ft_moveleft(map);
	else if (i == 2 || i == 124)
		ft_moveright(map);
}
