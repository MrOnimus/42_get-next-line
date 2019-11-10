/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:40:45 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:50:01 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	s1_copy = (unsigned char*)s1;
	s2_copy = (unsigned char*)s2;
	i = -1;
	while (++i < n && *s1_copy && *s2_copy)
	{
		if (*s1_copy != *s2_copy)
			return (0);
		s1_copy++;
		s2_copy++;
	}
	if ((i < n) && ((!(*s1_copy) && *s2_copy) || (*s1_copy && !(*s2_copy))))
		return (0);
	return (1);
}
