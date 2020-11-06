/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:03:12 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/11 09:07:43 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				len;

	str = (char *)s;
	len = ft_strlen(str);
	if (c == '\0')
		return (&str[len]);
	while (len >= 0)
	{
		if (s[len] == c)
			return (&str[len]);
		len--;
	}
	return (0);
}
