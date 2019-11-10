/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 05:50:01 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/24 18:50:51 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	s1_copy = (unsigned char*)s1;
	s2_copy = (unsigned char*)s2;
	i = -1;
	while (++i < n && *s1_copy && *s2_copy)
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
