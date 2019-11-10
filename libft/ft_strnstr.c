/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 05:18:42 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:40:46 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	hst_i;
	int	ndl_i;
	int i;

	if (!needle[0])
		return ((char*)haystack);
	hst_i = 0;
	while (haystack[hst_i] && len--)
	{
		ndl_i = 0;
		i = len + 1;
		while (needle[ndl_i] == haystack[hst_i + ndl_i] && i--)
		{
			if (!needle[ndl_i + 1])
				return ((char*)haystack + hst_i);
			ndl_i++;
		}
		hst_i++;
	}
	return (0);
}
