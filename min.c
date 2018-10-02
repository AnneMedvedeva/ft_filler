/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:36:38 by amedvedi          #+#    #+#             */
/*   Updated: 2018/07/26 14:36:40 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	**strstrnew(int height)
{
	char		**strstr;

	strstr = NULL;
	if (!(strstr = (char **)ft_memalloc(sizeof(char*) * (height + 1))))
		return (NULL);
	return (strstr);
}

char	print_exit(char *str)
{
	ft_putendl_fd(str, 2);
	return (1);
}

void	ft_strstrdel(char ***str)
{
	int		i;
	char	**tmp;

	tmp = *str;
	i = -1;
	while (tmp[++i])
	{
		ft_strdel(&(tmp[i]));
		tmp[i] = NULL;
	}
	free(*str);
	*str = NULL;
}

int		check(char *str, int r)
{
	int			ret;

	ret = 0;
	if (r == 1 && !(ft_strncmp("Plateau ", str, 8)))
		ret = 1;
	else if (r == 2 && !(ft_strncmp("Piece ", str, 6)))
		ret = 1;
	return (ret);
}

void	print_res(t_filler *content)
{
	ft_putnbr(YPOS);
	ft_putchar(' ');
	ft_putnbr(XPOS);
	ft_putchar('\n');
}
