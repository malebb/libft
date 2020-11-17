/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:28:58 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:28:59 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*cpy;
	char	*str;
	int		str_len;
	int		i;

	str = (char *)s;
	str_len = ft_strlen(str);
	if (!(cpy = malloc(sizeof(char) * str_len + 1)))
		return (0);
	i = 0;
	while (i < str_len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
