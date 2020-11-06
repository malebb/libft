/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 18:52:59 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/25 21:15:41 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*desti;
	char			*source;
	unsigned int	i;

	desti = (char *)dest;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		desti[i] = source[i];
		if (source[i] == c)
			return (&desti[i + 1]);
		i++;
	}
	return (0);
}
