/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:15:21 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:15:22 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcnpy(char *dest, const char *src, size_t n)
{
	size_t	strlen;
	size_t	i;

	i = 0;
	if (!dest || src)
		return (NULL);
	strlen = ft_strlen((char*)src);
	while (i < n)
	{
		if (i > strlen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
