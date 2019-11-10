/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 06:30:23 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/29 20:50:36 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned char	*sub;
	size_t			i;

	if (!s)
		return (NULL);
	sub = (unsigned char*)s;
	if (!(sub = (unsigned char*)ft_strnew(len)))
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start + i];
	return ((char*)sub);
}
