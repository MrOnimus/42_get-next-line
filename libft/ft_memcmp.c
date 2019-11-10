/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:07:58 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/24 18:46:45 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	s1_copy = (unsigned char*)s1;
	s2_copy = (unsigned char*)s2;
	i = -1;
	while (++i < n)
	{
		if (*s1_copy != *s2_copy)
			return ((int)(*s1_copy - *s2_copy));
		s1_copy++;
		s2_copy++;
	}
	if ((i < n) && ((!(*s1_copy) && *s2_copy) || (*s1_copy && !(*s2_copy))))
		return ((int)(*s1_copy - *s2_copy));
	return (0);
}
