/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 22:34:34 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:14:38 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char			*mem;
	unsigned long	size_l;
	size_t			i;

	size_l = (unsigned long)size;
	if (!(mem = (char*)malloc((size_l + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < size + 1)
		mem[i] = 0;
	return (mem);
}
