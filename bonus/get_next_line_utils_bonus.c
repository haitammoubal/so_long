/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoubal <hmoubal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:26:25 by hmoubal           #+#    #+#             */
/*   Updated: 2022/01/11 20:41:34 by hmoubal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*ft_strdup(const char *src)
{
	char	*hub;
	int		i;
	int		len;

	hub = NULL;
	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	hub = malloc(len + 1);
	if (hub == NULL)
	{
		free(hub);
		return (NULL);
	}
	while (src[i] != '\0')
	{
		hub[i] = src[i];
		i++;
	}
	hub[i] = '\0';
	return (hub);
}

char	*ft_strjoin(char *s1,	char *s2)
{
	char	*tab;
	size_t	i;
	size_t	j;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = i + j;
	tab = (char *)malloc(k + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		tab[i] = (char)s1[i];
		i++;
	}
	while (s2[j] != '\0')
		tab[i++] = (char)s2[j++];
	tab[k] = '\0';
	free((char *)s1);
	return (tab);
}
