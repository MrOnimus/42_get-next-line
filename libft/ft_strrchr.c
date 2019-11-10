/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:11:39 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/24 18:51:05 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	*occurence;

	str = (unsigned char*)s;
	occurence = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			occurence = str;
		str++;
	}
	if (*str == (unsigned char)c)
		occurence = str;
	return ((char *)occurence);
}
