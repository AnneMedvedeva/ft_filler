/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_item.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:36:23 by amedvedi          #+#    #+#             */
/*   Updated: 2018/07/26 14:36:25 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		fill_copy_map(t_filler *content)
{
	int		h;

	h = -1;
	MAP = strstrnew(MAPH);
	while (MAPH > ++h)
	{
		if (get_next_line(STDIN, &STR) > 0)
		{
			MAP[h] = ft_strsub(STR, 4, MAPW);
			ft_strdel(&STR);
		}
		else
			return (1);
	}
	MAP[h] = NULL;
	return (0);
}

int		make_dist_map(t_filler *content)
{
	int	i;
	int w;
	int h;

	i = -1;
	if (!(DISTMAP = (int **)malloc(sizeof(int *) * (MAPH))))
		print_exit("Malloc error.");
	while (MAPH > ++i)
	{
		if (!(DISTMAP[i] = (int *)malloc(sizeof(int) * (MAPW))))
			print_exit("Malloc error.");
	}
	h = -1;
	while (MAPH > ++h)
	{
		w = -1;
		while (MAPW > ++w)
		{
			DISTMAP[h][w] = MAX_INT;
		}
	}
	return (0);
}

int		make_new_item(t_filler *content)
{
	int					h;

	h = -1;
	ITEM = strstrnew(ITEMH);
	while (ITEMH > ++h)
	{
		if (get_next_line(STDIN, &STR) > 0)
		{
			ITEM[h] = ft_strsub(STR, 0, ft_strlen(STR));
			ft_strdel(&STR);
		}
		else
			return (1);
	}
	ITEM[h] = NULL;
	if (make_trimmed_item(content) != 0)
		return (1);
	return (0);
}
