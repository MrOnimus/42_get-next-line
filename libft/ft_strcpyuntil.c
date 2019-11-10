/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyuntil.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:39:21 by rdremora          #+#    #+#             */
/*   Updated: 2019/06/30 17:27:31 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcpyuntil(char **dst, char *str, char delim)
{
	int		i;
	int		count;
	int		pos;

	i = -1;
	count = 0;
	while (str[++i])
		if (str[i] == delim)
			break ;
	pos = i;
	if (!(*dst = ft_strnew(i)))
		return (0);
	while (str[count] && count < i)
	{
		if (!(*dst = ft_strjoinch(*dst, str[count])))
			return (0);
		count++;
	}
	return (pos);
}
