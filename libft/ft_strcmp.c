/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 02:07:27 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/24 18:50:04 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	s1_copy = (unsigned char*)s1;
	s2_copy = (unsigned char*)s2;
	while (*s1_copy && *s2_copy)
	{
		if (*s1_copy != *s2_copy)
			return ((int)(*s1_copy - *s2_copy));
		s1_copy++;
		s2_copy++;
	}
	if ((!(*s1_copy) && *s2_copy) || (*s1_copy && !(*s2_copy)))
		return ((int)(*s1_copy - *s2_copy));
	return (0);
}
