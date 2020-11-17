/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:28:22 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:28:24 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
