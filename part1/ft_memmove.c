/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:28:10 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 14:13:12 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*des;
	char		*source;
	size_t		i;

	des = (char *)dest;
	source = (char *)src;
	if (des >= source)
	{
		while (n > 0)
		{
			des[n - 1] = source[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (source[i] != '\0' && i < n)
		{
			des[i] = source[i];
			i++;
		}
	}
	return (des);
}
