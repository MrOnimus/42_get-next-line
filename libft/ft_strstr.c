/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:26:06 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/22 22:51:18 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	hayst_i;
	int	needl_i;

	if (!needle[0])
		return ((char*)haystack);
	hayst_i = 0;
	while (haystack[hayst_i])
	{
		needl_i = 0;
		while (needle[needl_i] == haystack[hayst_i + needl_i])
		{
			if (!needle[needl_i + 1])
				return ((char*)haystack + hayst_i);
			needl_i++;
		}
		hayst_i++;
	}
	return (0);
}
