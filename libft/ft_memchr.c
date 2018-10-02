/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:10:56 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:10:58 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char*)s;
	while (n--)
	{
		if (*dest == (unsigned char)c)
			return (dest);
		dest++;
	}
	return (NULL);
}
