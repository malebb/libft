/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 10:52:40 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/16 15:49:38 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*joined_strs;
	unsigned int	s1_size;
	unsigned int	s2_size;
	unsigned int	i;
	unsigned int	j;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (!(joined_strs = malloc(sizeof(char) * (s1_size + s2_size + 1))))
		return (0);
	i = 0;
	while (i < s1_size)
	{
		joined_strs[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_size)
	{
		joined_strs[i + j] = s2[j];
		j++;
	}
	joined_strs[i + j] = '\0';
	return (joined_strs);
}
