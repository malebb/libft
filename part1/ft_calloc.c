/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:08:15 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/11 09:00:56 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char			*mem_area;

	if (nmemb == 0 || size == 0)
		return (0);
	if (!(mem_area = malloc(size * (nmemb))))
		return (0);
	i = 0;
	while (i < nmemb)
	{
		mem_area[i] = 0;
		i++;
	}
	return (mem_area);
}
