/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:34:35 by amedvedi          #+#    #+#             */
/*   Updated: 2018/07/26 14:34:39 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

/*
**------------------Defines
*/

# define ITEM content->item
# define ITEMW content->tx
# define ITEMH content->ty
# define MAP content->map
# define MAPH content->max_y
# define MAPW content->max_x
# define ME content->player
# define ENEMY content->enemy
# define DISTMAP content->priority
# define BESTPOS content->best_position
# define YPOS content->y_pos
# define XPOS content->x_pos
# define STR content->str
# define ELEM ".OXox"

/*
**------------------Structure
*/

typedef	struct			s_filler
{
	char				player;
	char				enemy;
	int					max_y;
	int					max_x;
	char				**map;
	int					**priority;
	int					ty;
	int					tx;
	char				**item;
	long				best_position;
	int					y_pos;
	int					x_pos;
	char				*str;
}						t_filler;

/*
**------------------Map
*/

int						save_map_xy(t_filler *content);
int						fill_copy_map(t_filler *content);
int						make_dist_map(t_filler *content);
void					fill_dist_map(t_filler *content);

/*
**------------------Item
*/

int						save_item_xy(t_filler *content);
int						make_new_item(t_filler *content);
int						make_trimmed_item(t_filler *content);

/*
**------------------Algo
*/

int						find_it(t_filler *content);
void					check_fit(t_filler *content, long res);

/*
**------------------Additional
*/

char					**strstrnew(int height);
int						check(char *str, int r);
char					print_exit(char *str);
void					print_res(t_filler *content);
void					ft_strstrdel(char ***str);

#endif
