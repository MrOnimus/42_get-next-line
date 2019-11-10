/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 18:51:57 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/29 20:59:01 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start_new_lst;
	t_list	*new_lst;

	if (lst && f)
	{
		start_new_lst = f(lst);
		new_lst = start_new_lst;
		lst = lst->next;
		while (lst)
		{
			if (!(new_lst->next = f(lst)))
			{
				free(new_lst->next);
				return (NULL);
			}
			new_lst = new_lst->next;
			lst = lst->next;
		}
		return (start_new_lst);
	}
	return (NULL);
}
