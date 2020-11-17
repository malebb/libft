/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:29:10 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/14 15:59:59 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	src_size;
	unsigned int	dst_size;
	char			*s;
	unsigned int	i;

	s = (char *)src;
	src_size = ft_strlen(s);
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (size + src_size);
	i = 0;
	while (src[i] != '\0' && i < (size - dst_size - 1))
	{
		dst[i + dst_size] = src[i];
		i++;
	}
	dst[i + dst_size] = '\0';
	return (src_size + dst_size);
}
