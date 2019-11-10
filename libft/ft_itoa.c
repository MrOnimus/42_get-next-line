/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xenomorph <xenomorph@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 05:51:02 by rdremora          #+#    #+#             */
/*   Updated: 2019/02/23 06:19:00 by xenomorph        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	size;
	int		i;

	size = 0;
	i = 1;
	if (n < 0)
	{
		size++;
		if (n == -2147483648)
		{
			size++;
			n %= 1000000000;
		}
		n = -n;
	}
	while (n / i >= 10)
	{
		i *= 10;
		size++;
	}
	return (size + 1);
}

char			*ft_itoa(int n)
{
	size_t			size;
	unsigned char	*s;
	int				i;

	size = ft_numlen(n);
	if (!(s = (unsigned char*)ft_strnew(size)))
		return (NULL);
	if (n < 0)
		s[0] = '-';
	i = size;
	while (n != 0 && i >= 0)
	{
		if (n % 10 >= 0)
			s[--i] = '0' + (n % 10);
		else
			s[--i] = '0' - (n % 10);
		n /= 10;
	}
	if (!(*s))
		s[0] = '0';
	else
		s[size] = '\0';
	return ((char*)s);
}
