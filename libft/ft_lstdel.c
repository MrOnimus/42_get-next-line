/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 18:37:33 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/29 20:22:04 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	if (alst && del)
		while (*alst)
		{
			(*del)((void*)(*alst)->content, (*alst)->content_size);
			lst = (*alst)->next;
			free(*alst);
			*alst = lst;
		}
	*alst = (t_list*)NULL;
}
