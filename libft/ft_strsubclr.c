/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubclr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 06:30:23 by rdremora          #+#    #+#             */
/*   Updated: 2019/07/14 00:33:48 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubclr(char **s, unsigned int start, size_t len)
{
	unsigned char	*sub;
	size_t			i;

	if (!s || !(*s))
		return (NULL);
	sub = *(unsigned char**)s;
	if (!(sub = (unsigned char*)ft_strnew(len)))
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = (*s)[start + i];
	ft_strdel(s);
	return ((char*)sub);
}
