/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 19:39:02 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/29 20:34:17 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	flag;

	i = -1;
	flag = 1;
	while (++i < len)
		if (src[i] && flag == 1)
			dst[i] = src[i];
		else
		{
			flag = 0;
			dst[i] = '\0';
		}
	return (dst);
}
