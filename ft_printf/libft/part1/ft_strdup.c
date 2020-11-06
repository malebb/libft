/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 07:57:48 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/11 09:05:19 by matthieu         ###   ########.fr       */
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
