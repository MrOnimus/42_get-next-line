/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:44:02 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:48:49 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			new[i] = (*f)(s_copy[i]);
	}
	return ((char*)new);
}
