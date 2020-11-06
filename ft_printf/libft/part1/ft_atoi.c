/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:49:46 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/24 23:49:47 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *nptr)
{
	int		pos_or_neg;
	int		i;
	long	nb;

	i = 0;
	while (nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == ' ')
	{
		i++;
	}
	pos_or_neg = 1;
	if (nptr[i] == '-')
	{
		pos_or_neg = -1;
		i++;
	}
	else if(nptr[i] == '+')
		i++;
	nb = 0;
	while (ft_isdigit(nptr[i]))
	{
		nb *= 10;
		nb += nptr[i] - '0';
		i++;
	}
	return (nb * pos_or_neg);
}
