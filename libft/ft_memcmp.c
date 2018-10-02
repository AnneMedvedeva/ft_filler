/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:11:09 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:11:11 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (void*)s1;
	str2 = (void*)s2;
	while (n && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	if (!n)
		return (0);
	return (*str1 - *str2);
}
