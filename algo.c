/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:35:49 by amedvedi          #+#    #+#             */
/*   Updated: 2018/07/26 14:35:52 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	fill_the_distance(int h, int w, t_filler *content)
{
	int			coordx;
	int			coordy;
	int			j;
	int			i;

	j = 0;
	while (MAPH > j)
	{
		i = 0;
		while (MAPW > i)
		{
			if (MAP[j][i] == ME || MAP[j][i] == '.')
			{
				coordy = ((j - h) < 0) ? -(j - h) : (j - h);
				coordx = ((i - w) < 0) ? -(i - w) : (i - w);
				((coordy + coordx) < DISTMAP[j][i]) ?
					(DISTMAP[j][i] = (coordy + coordx)) : 0;
			}
			i++;
		}
		j++;
	}
}

int		find_it(t_filler *content)
{
	int			w;
	int			h;
	int			count;

	h = -1;
	count = 0;
	while (MAPH > ++h)
	{
		w = -1;
		while (MAPW > ++w)
		{
			if (!(MAP[h][w] == ME) && !(MAP[h][w] == '.'))
			{
				DISTMAP[h][w] = 0;
				fill_the_distance(h, w, content);
				count++;
			}
		}
	}
	if (count <= 0)
		return (1);
	return (0);
}

int		can_place_it(int j, int i, t_filler *content)
{
	int			h;
	int			w;
	int			res;
	int			overlap;

	h = -1;
	overlap = 0;
	while (ITEMH > ++h)
	{
		w = -1;
		while (ITEMW > ++w)
		{
			if (ITEM[h][w] != '.')
			{
				if (MAP[j + h][i + w] != '.')
				{
					(MAP[j + h][i + w] != ENEMY) ? overlap++ : 0;
					if (MAP[h + j][w + i] != ME)
						return (0);
				}
			}
		}
	}
	res = ((overlap == 1) ? (1) : (0));
	return (res);
}

long	update_best_position(int j, int i, t_filler *content)
{
	long		pos_sum;
	int			h;
	int			w;
	int			sjy;
	int			sxi;

	pos_sum = 0;
	h = 0;
	sjy = 0;
	sxi = 0;
	while (ITEMH > h)
	{
		w = 0;
		while (ITEMW > w)
		{
			sjy = h + j;
			sxi = w + i;
			pos_sum = pos_sum + DISTMAP[sjy][sxi];
			w++;
		}
		h++;
	}
	return (pos_sum);
}

void	check_fit(t_filler *content, long res)
{
	int			y;
	int			x;

	y = 0;
	while (MAPH > (ITEMH - 1) + y)
	{
		x = 0;
		while (MAPW > (ITEMW - 1) + x)
		{
			if (can_place_it(y, x, content))
			{
				res = update_best_position(y, x, content);
				if (res < BESTPOS)
				{
					BESTPOS = res;
					YPOS = y;
					XPOS = x;
				}
			}
			x++;
		}
		y++;
	}
}
