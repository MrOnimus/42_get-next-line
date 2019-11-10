/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 06:58:52 by rdremora          #+#    #+#             */
/*   Updated: 2019/03/29 20:51:44 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	rows;
	size_t	i;
	size_t	flag;

	rows = 0;
	i = -1;
	flag = 0;
	while (s[++i])
	{
		if (flag && s[i] == c)
		{
			rows++;
			flag = 0;
		}
		if (!flag && s[i] != c)
			flag = 1;
	}
	if (flag)
		rows++;
	return (rows);
}

static int		ft_find_word(const char *s, int i, char **arr, char c)
{
	int		len;
	int		space_count;

	space_count = 0;
	len = 0;
	while (*s == c)
	{
		s++;
		space_count++;
	}
	while (s[len] && s[len] != c)
		len++;
	if (len > 0)
	{
		if (!(arr[i] = ft_strnew(len)))
			return (0);
		ft_strncpy(arr[i], s, len);
	}
	return (space_count + len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	words_count;
	size_t	len;

	if (!s)
		return (NULL);
	words_count = ft_count_words(s, c) + 1;
	len = 0;
	if (!(arr = (char**)malloc(words_count * sizeof(char*))))
		return (NULL);
	i = 0;
	while (*s)
	{
		len = ft_find_word(s, i++, arr, c);
		s += len;
	}
	arr[words_count - 1] = NULL;
	return (arr);
}
