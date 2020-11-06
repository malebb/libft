/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 20:08:10 by mlebrun           #+#    #+#             */
/*   Updated: 2020/10/08 20:54:22 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_strncat(char *dest, char *src, int n);
void	ft_strcpy_from(char *dest, char *src, int j);
int		ft_update_line(char **line, int j, char *buffer);
int		ft_islast_buffer(char *buffer);
int		ft_read_file(int fd, char *buffer, char *buf_remains, char **line);
int		ft_finish_buffer(char *buffer, char *buf_remains, char **line);
int		get_next_line(int fd, char **line);

#endif
