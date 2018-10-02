/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:15:49 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:15:51 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*out;
	int		i;

	i = 0;
	while (src[i])
		i++;
	out = (char*)malloc(sizeof(*out) * (i + 1));
	if (!out)
		return (NULL);
	i = -1;
	while (src[++i])
		out[i] = src[i];
	out[i] = '\0';
	return (out);
}
