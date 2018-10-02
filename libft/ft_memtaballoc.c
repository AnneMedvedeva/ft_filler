/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memtaballoc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:11:49 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:11:51 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memtaballoc(size_t tab, size_t size)
{
	char	**out;
	size_t	i;

	i = 0;
	if (!tab || !size)
		return (NULL);
	if (!(out = (char**)malloc(sizeof(char*) * tab)))
		return (NULL);
	while (--tab)
	{
		if (!(out[i] = (char*)malloc(sizeof(char) * size)))
			return (NULL);
		ft_memset(out[i++], 0, size);
	}
	out[i] = NULL;
	return (out);
}
