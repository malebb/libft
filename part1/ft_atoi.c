/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:24:22 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:24:30 by mlebrun          ###   ########.fr       */
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
