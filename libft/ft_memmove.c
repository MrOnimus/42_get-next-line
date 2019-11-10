/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:07:58 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/24 20:48:00 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	destination = (char*)dst;
	source = (char*)src;
	if (destination > source)
		while (len)
		{
			destination[len - 1] = source[len - 1];
			len -= 1;
		}
	else
		while (len--)
			*destination++ = *source++;
	return (dst);
}
