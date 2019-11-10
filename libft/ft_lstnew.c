/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 17:48:13 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:16:48 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*c;

	if (!(c = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		c->content = NULL;
		c->content_size = 0;
	}
	else
	{
		if (!(c->content = malloc(content_size)))
		{
			free(c);
			return (NULL);
		}
		else
			ft_memcpy(c->content, (void*)content, content_size);
		c->content_size = content_size;
	}
	c->next = NULL;
	return (c);
}
