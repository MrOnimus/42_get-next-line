/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 01:55:38 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:42:35 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_return(unsigned long long result, int sign, const char *str)
{
	int count_num;

	count_num = 0;
	while (!ft_isdigit(*str))
		str++;
	while (ft_isdigit(*(str + count_num)))
		count_num++;
	if (result == 9223372036854775806)
		return (sign == -1 ? 2 : -2);
	if (count_num > 18 && result > 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	return (sign * result);
}

int			ft_atoi(const char *str)
{
	unsigned char		*nptr_copy;
	unsigned long long	result;
	int					sign;

	nptr_copy = (unsigned char*)str;
	result = 0;
	sign = 1;
	while (ft_isspace(*nptr_copy))
		nptr_copy++;
	if (*nptr_copy == '-')
		sign = -1;
	if (*nptr_copy == '-' || *nptr_copy == '+')
		nptr_copy++;
	while (*nptr_copy)
	{
		if (ft_isdigit(*nptr_copy))
			result = result * 10 + (*nptr_copy - '0');
		else
			return (ft_get_return(result, sign, str));
		nptr_copy++;
	}
	return (ft_get_return(result, sign, str));
}
