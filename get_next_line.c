/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:52:07 by xenomorph         #+#    #+#             */
/*   Updated: 2019/07/14 23:05:13 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

t_list	*ft_lstfind(t_list **head, int fd)
{
	t_list	*t;

	t = *head;
	while (t)
	{
		if ((int)t->content_size == fd)
			return (t);
		t = t->next;
	}
	t = ft_lstnew("\0", fd);
	ft_lstadd(head, t);
	t = *head;
	return (t);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*head;
	t_list			*t;
	char			buf[BUFF_SIZE + 1];
	int				n;
	int				ret;

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	t = ft_lstfind(&head, fd);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (!(t->content = ft_strjoinoptclr((char**)&t->content, buf, 1)))
			return (-1);
		if (ft_strchr(t->content, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(t->content))
		return (0);
	n = ft_strcpyuntil(line, t->content, '\n');
	(n < (int)ft_strlen(t->content)) ? t->content =
	ft_strsubclr((char**)&(t->content), n + 1, ft_strlen(t->content) - (n + 1)) : ft_strclr(t->content);
	return (1);
}
