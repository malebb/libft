/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:25:30 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/18 14:12:18 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char			*mem_area;

	if (!(mem_area = malloc(size * (nmemb))))
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		mem_area[i] = 0;
		i++;
	}
	return (mem_area);
}
