/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:16:34 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:27:21 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len2;

	if (!*s2)
		return ((char*)s1);
	len2 = ft_strlen((char*)s2);
	while (*s1 && (n-- >= len2))
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len2) == 0)
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
