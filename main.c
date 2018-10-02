/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:36:06 by amedvedi          #+#    #+#             */
/*   Updated: 2018/07/26 14:36:08 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		who_am_i(t_filler *content)
{
	if (get_next_line(STDIN, &STR) > 0)
	{
		if (ft_strncmp("$$$ exec p1 :", STR, 12)
			&& (ft_strncmp("$$$ exec p2 :", STR, 12)))
		{
			return (1);
		}
		ME = (STR[10] == '1') ? 'O' : 'X';
		ENEMY = (STR[10] == '1') ? 'X' : 'O';
		ft_strdel(&STR);
	}
	else
		return (1);
	return (0);
}

void	filler_core(t_filler *content)
{
	while (get_next_line(STDIN, &STR) > 0)
	{
		if (!ft_strncmp(STR, "Plateau", 7))
		{
			ft_strdel(&STR);
			get_next_line(STDIN, &STR);
		}
		ft_strdel(&STR);
		if (fill_copy_map(content) || save_item_xy(content) ||
			make_new_item(content))
		{
			ft_strstrdel(&(ITEM));
			ft_strstrdel(&(MAP));
			break ;
		}
		if (find_it(content) == 1)
			break ;
		BESTPOS = LONG_MAX;
		YPOS = 0;
		XPOS = 0;
		check_fit(content, 0);
		print_res(content);
		ft_strstrdel(&(ITEM));
		ft_strstrdel(&(MAP));
	}
}

int		main(void)
{
	t_filler		content;

	if (who_am_i(&content) || save_map_xy(&content)
		|| make_dist_map(&content))
	{
		return (0);
	}
	filler_core(&content);
	return (0);
}
