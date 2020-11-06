/* ************************************************************************** */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 20:11:29 by mlebrun           #+#    #+#             */
/*   Updated: 2020/10/03 20:32:41 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_read_file(int fd, char *buffer, char *buf_remains, char **line)
{
	int		byte_read;
	int		j;

	while ((byte_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{

		j = 0;
		buffer[byte_read] = '\0';
		while (buffer[j] != '\0' && buffer[j] != '\n')
			j++;
		if (buffer[j] == '\n')
		{
			ft_strcpy_from(buf_remains, buffer, j + 1);
			if (ft_update_line(line, j, buffer) == -1)
				return (-1);
			break ;
		}
		if (ft_update_line(line, j, buffer) == -1)
			return (-1);
	}
	if (byte_read == 0 || byte_read == -1)
		return (byte_read);
	return (1);
}
int		ft_finish_buffer(char *buffer, char *buf_remains, char **line)
{
	int		i;

	i = 0;
	if (buf_remains[0] != 0)
	{
		ft_strcpy_from(buffer, buf_remains, 0);
		while (buf_remains[i] != '\0' && buf_remains[i] != '\n')
			i++;
		if (buf_remains[i] == '\n')
		{
			ft_strcpy_from(buf_remains, buffer, i + 1);
			if (ft_update_line(line, i, buffer) == -1)
				return (-1);
			return (1);
		}
		if (ft_update_line(line, i, buffer) == -1)
			return (-1);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	char			buffer[BUFFER_SIZE + 1];
	static char		buf_remains[BUFFER_SIZE + 1] = {0};
	int				return_value;
	
	if (BUFFER_SIZE <= 0 || fd < 0 || !line)
		return (-1);
	*line = NULL;
	return_value = ft_finish_buffer(buffer, buf_remains, line);
	if (return_value == 1 || return_value == -1)
		return (return_value);
	return_value = ft_read_file(fd, buffer, buf_remains, line);
	if (*line == NULL)
		return (-1);
	return (return_value);
}
