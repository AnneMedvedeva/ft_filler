/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddmid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:09:00 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:09:02 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddmid(t_list **alst, t_list *previous, t_list *new)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!alst || !previous || !new)
		return ;
	tmp = *alst;
	while (tmp && (tmp != previous))
		tmp = tmp->next;
	if (tmp == previous)
	{
		tmp2 = tmp->next;
		tmp->next = new;
		new->next = tmp2;
	}
}
