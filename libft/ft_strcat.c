/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 20:01:12 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/24 18:49:43 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i_s1;
	size_t i_s2;

	if (!s1 && !s2)
		return (NULL);
	i_s1 = -1;
	i_s2 = -1;
	while (s1[++i_s1])
		;
	while (s2[++i_s2])
		s1[i_s1 + i_s2] = s2[i_s2];
	s1[i_s1 + i_s2] = '\0';
	return (s1);
}
