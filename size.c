/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:36:46 by amedvedi          #+#    #+#             */
/*   Updated: 2018/07/26 14:36:48 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		save_map_xy(t_filler *content)
{
	char		**size;

	if (get_next_line(STDIN, &STR) > 0)
	{
		if (ft_strlen(STR) <= 8)
			return (print_exit("Invalid map size."));
		if (!check(STR, 1) || !(size = ft_strsplit(STR, ' ')))
		{
			ft_strdel(&STR);
			return (1);
		}
		MAPH = ft_atoi(size[1]);
		MAPW = ft_atoi(size[2]);
		ft_strstrdel(&(size));
		ft_strdel(&STR);
	}
	else
		return (1);
	return (0);
}

int		save_item_xy(t_filler *content)
{
	char				**size;

	if (get_next_line(STDIN, &STR) > 0)
	{
		if (!check(STR, 2) || !(size = ft_strsplit(STR, ' ')))
			return (1);
		ITEMH = ft_atoi(size[1]);
		ITEMW = ft_atoi(size[2]);
		ft_strstrdel(&(size));
		ft_strdel(&STR);
	}
	else
		return (1);
	return (0);
}
