/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttabstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:24:05 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:24:07 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttabstr(char **str)
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	ft_putchar('{');
	ft_putchar('\n');
	while (str[i])
	{
		ft_putchar('\t');
		ft_putchar('\"');
		ft_putstr(str[i++]);
		ft_putendl("\",");
	}
	ft_putendl("}");
}
