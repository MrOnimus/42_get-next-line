/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:56:46 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:49:12 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	unsigned char	*s_copy;
	char			*new;

	new = NULL;
	if (s && f)
	{
		i = -1;
		size = ft_strlen(s);
		s_copy = (unsigned char*)s;
		new = ft_strnew(size);
		if (!new)
			return (NULL);
		while (s_copy[++i])
			new[i] = (*f)(i, s_copy[i]);
	}
	return ((char*)new);
}
