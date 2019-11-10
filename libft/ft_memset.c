/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 17:41:41 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/29 20:26:18 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*dest;

	if (len > 0)
	{
		i = -1;
		dest = b;
		while (++i < len)
		{
			dest[0] = (unsigned char)c;
			dest += 1;
		}
	}
	return (b);
}
