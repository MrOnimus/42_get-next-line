/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 20:10:04 by rdremora          #+#    #+#             */
/*   Updated: 2019/07/14 22:02:16 by rdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		ret;

	line = NULL;
	fd = -1;
	if (argc != 2 || (fd = open(argv[1], O_RDONLY)) == -1)
		return (-1);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		if (ret != 1)
			printf("Mauvaise valeur de retour pendant la lecture!");
		printf("%s", line);
		free(line);
		line = NULL;
	}
	free(line);
	close(fd);
	if (ret != 0)
		printf("Mauvaise valeur de retour a la fin de la lecture!");
	return (0);
}
