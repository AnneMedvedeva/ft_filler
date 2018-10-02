/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:16:43 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:16:45 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	len;

	len = ft_strlen((char *)src);
	while (0 != len && src[len] != (char)c)
		len--;
	if (src[len] == (char)c)
		return ((char *)&src[len]);
	return (NULL);
}
