/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:07:58 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/24 18:48:30 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	destination = (unsigned char*)dst;
	source = (unsigned char*)src;
	i = -1;
	if (destination != source)
		while (++i < n)
		{
			destination[i] = source[i];
			if (source[i] == (unsigned char)c)
				return (&destination[i + 1]);
		}
	return (0);
}
