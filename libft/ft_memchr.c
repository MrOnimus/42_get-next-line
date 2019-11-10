/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:07:58 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/15 23:28:57 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*source;

	i = -1;
	source = (unsigned char*)s;
	while (++i < n)
	{
		if (*source == (unsigned char)c)
			return (source);
		source++;
	}
	return (0);
}
