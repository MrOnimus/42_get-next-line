/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 21:28:32 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/14 23:02:59 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d_copy;
	const char	*s_copy;
	size_t		n;
	size_t		actual_size;

	d_copy = dst;
	s_copy = src;
	n = size;
	while (n-- != 0 && *d_copy != '\0')
		d_copy++;
	actual_size = d_copy - dst;
	n = size - actual_size;
	if (!n)
		return (actual_size + ft_strlen(s_copy));
	while (*s_copy)
	{
		if (n != 1)
		{
			*d_copy++ = *s_copy;
			n--;
		}
		s_copy++;
	}
	*d_copy = '\0';
	return (actual_size + (s_copy - src));
}
