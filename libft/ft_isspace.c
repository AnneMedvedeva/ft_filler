/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:22:13 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:22:14 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (ft_blank(c) != -1)
		return (c);
	else if (c == '\r')
		return (c);
	else if (c == '\v')
		return (c);
	else if (c == '\f')
		return (c);
	return (-1);
}
