/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:27:58 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/18 13:38:31 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*desti;
	char			*source;

	if (!dest && !src)
		return (NULL);
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
