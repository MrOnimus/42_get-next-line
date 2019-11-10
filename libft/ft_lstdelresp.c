/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelresp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 18:24:14 by rdremora          #+#    #+#             */
/*   Updated: 2019/06/30 19:35:21 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelresp(t_list *head, int fd)
{
	t_list	*curr;
	t_list	*prev;

	if (!head || !fd)
		return ;
	prev = head;
	while ((curr = prev->next))
	{
		if (curr->content_size == (size_t)fd)
		{
			*prev->next = *curr->next;
			free(curr->content);
			free(curr);
		}
	}
}
