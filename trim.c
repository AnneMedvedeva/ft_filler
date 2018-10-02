/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:36:54 by amedvedi          #+#    #+#             */
/*   Updated: 2018/07/26 14:36:56 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		find_new_width(t_filler *content)
{
	int		x;
	int		y;

	x = ITEMW;
	while (--x >= 0)
	{
		y = -1;
		while (ITEMH > ++y)
			if (ITEM[y][x] == '*')
				return (x + 1);
	}
	return (0);
}

int		find_new_height(t_filler *content)
{
	int		y;

	y = ITEMH;
	while (--y >= 0)
	{
		if (ft_strchr(ITEM[y], '*'))
			return (y + 1);
	}
	return (0);
}

int		make_trimmed_item(t_filler *content)
{
	char	**new_item;
	int		i;
	int		height;
	int		width;

	height = find_new_height(content);
	width = find_new_width(content);
	new_item = strstrnew(height);
	i = 0;
	while (height > i)
	{
		new_item[i] = ft_strsub(ITEM[i], 0, width);
		i++;
	}
	ITEMW = width;
	ITEMH = height;
	ft_strstrdel(&(ITEM));
	new_item[height] = NULL;
	ITEM = new_item;
	return (0);
}
