/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyhook_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 04:07:53 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 20:42:11 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_keyhook(t_srcs *srcs, t_map	*map, int i)
{
	if (i == 53)
		exit(1);
	else if (i == 13 || i == 126)
		ft_moveup(srcs, map);
	else if (i == 1 || i == 125)
		ft_movedown(srcs, map);
	else if (i == 0 || i == 123)
		ft_moveleft(srcs, map);
	else if (i == 2 || i == 124)
		ft_moveright(srcs, map);
}
