/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:10:30 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:10:32 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * (size))))
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
