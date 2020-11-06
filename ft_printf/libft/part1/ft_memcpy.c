/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 18:29:28 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/20 16:27:40 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*desti;
	char			*source;

	desti = (char *)dest;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		desti[i] = source[i];
		i++;
	}
	return (desti);
}
