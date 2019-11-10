/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 17:59:35 by xenomorph         #+#    #+#             */
/*   Updated: 2019/02/14 22:13:33 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char*)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char*)str);
		str++;
	}
	if (*str == (unsigned char)c)
		return ((char*)str);
	return (NULL);
}
