/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:28:10 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:28:12 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*des;
	char		*source;
	int			src_size;
	size_t		i;

	des = (char *)dest;
	source = (char *)src;
	src_size = ft_strlen(source);
	if (des >= source)
	{
		while (n > 0)
		{
			des[n - 1] = source[n - 1];
			src_size--;
			n--;
		}
	}
	else
	{
		i = -1;
		while (source[++i] != '\0' && i < n)
		{
			des[i] = source[i];
		}
	}
	return (des);
}
