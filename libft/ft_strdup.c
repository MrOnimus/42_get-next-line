/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 22:20:19 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/29 20:13:37 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	if (!(s2 = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	len = -1;
	while (s1[++len])
		s2[len] = s1[len];
	s2[len] = '\0';
	return (s2);
}
