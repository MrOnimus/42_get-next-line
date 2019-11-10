/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:37:08 by xenomorph         #+#    #+#             */
/*   Updated: 2019/03/29 20:49:32 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	if (!s1 || !s2)
		return (0);
	s1_copy = (unsigned char*)s1;
	s2_copy = (unsigned char*)s2;
	while (*s1_copy && *s2_copy)
	{
		if ((*s1_copy != *s2_copy))
			return (0);
		s1_copy++;
		s2_copy++;
	}
	if ((!(*s1_copy) && *s2_copy) || (*s1_copy && !(*s2_copy)))
		return (0);
	return (1);
}
