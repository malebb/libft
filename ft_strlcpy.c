/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:29:27 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:29:29 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	int				src_size;
	char			*s;

	s = (char *)src;
	src_size = ft_strlen(s);
	i = 0;
	if (size == 0)
		return (src_size);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
