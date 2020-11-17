/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:25:30 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 14:32:38 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char			*mem_area;

	if (nmemb == 0 || size == 0)
		return (NULL);
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
