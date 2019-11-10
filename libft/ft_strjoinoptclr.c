/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinoptclr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 22:03:59 by rdremora          #+#    #+#             */
/*   Updated: 2019/07/14 00:20:02 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoinoptclr(char **s1, char *s2, int flag)
{
	size_t			size;
	unsigned char	*joined;
	size_t			i_s1;
	size_t			i_s2;

	if (!(*s1) || !(s2))
		return (NULL);
	size = ft_strlen(*s1) + ft_strlen(s2);
	if (!(joined = (unsigned char*)ft_strnew(size)))
		return (NULL);
	i_s1 = -1;
	i_s2 = -1;
	while ((*s1)[++i_s1])
		joined[i_s1] = (*s1)[i_s1];
	while ((s2)[++i_s2])
		joined[i_s1 + i_s2] = (s2)[i_s2];
	joined[i_s1 + i_s2] = '\0';
	if (flag == 1 && *s1)
		ft_strdel(s1);
	return ((char*)joined);
}
