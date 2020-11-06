/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 19:54:36 by mlebrun           #+#    #+#             */
/*   Updated: 2020/10/08 22:59:07 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int		main(void)
{
	int		fd;
	char	*line = NULL;
	int		return_value;
//	int		line_read;
	int		i;
//	ft_strncat(s2, s1, 2);
//	printf("dest = %s", s2);
	fd = open("/dev/null", O_RDONLY);
//	line_read = 10;
	i = 0;
	return_value = 1;
	while (return_value > 0)
	{
		return_value = get_next_line(fd, &line);
		printf("%d |%s|\n", return_value, line);
		i++;
		free(line);
	}
	return (0);
}
