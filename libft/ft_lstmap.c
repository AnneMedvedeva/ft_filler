/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:10:09 by amedvedi          #+#    #+#             */
/*   Updated: 2018/06/08 13:10:10 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*first;

	if (lst && f)
	{
		new = f(lst);
		if (new)
		{
			first = new;
			while (lst->next)
			{
				lst = lst->next;
				new->next = f(lst);
				new = new->next;
				if (!new)
					return (NULL);
			}
			return (first);
		}
	}
	return (NULL);
}
