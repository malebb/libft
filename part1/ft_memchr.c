/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 10:16:35 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/11 09:02:16 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*src;
	unsigned	i;

	src = (char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return (&src[i]);
		i++;
	}
	return (0);
}
