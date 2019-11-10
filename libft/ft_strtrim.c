/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:18:32 by rdremora          #+#    #+#             */
/*   Updated: 2019/02/17 05:46:51 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_char_check(char c)
{
	if (c != ' ' && c != '\n' && c != '\t')
		return (1);
	return (0);
}

static size_t	ft_strlen_whtspcs(const char *s)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = ft_strlen(s) - 1;
	while (s[size] && !ft_char_check(s[size]))
		size++;
	while (!ft_char_check(s[i]) && i > size)
	{
		i--;
		size++;
	}
	size = ft_strlen(s) - size;
	return (size);
}

char			*ft_strtrim(char const *s)
{
	char	*dst;
	size_t	i;
	size_t	j;
	size_t	flag;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen_whtspcs(s);
	if (!(dst = ft_strnew(size)))
		return (NULL);
	i = -1;
	j = -1;
	flag = 0;
	while (s[++i])
	{
		if (ft_char_check(s[i]))
			flag = 1;
		if (flag)
			dst[++j] = s[i];
		if (j == size)
			break ;
	}
	dst[size] = '\0';
	return (dst);
}
