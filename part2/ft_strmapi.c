/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 07:41:01 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/26 17:00:01 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				str_len;
	char			*returns;
	unsigned int	i;
	char	*str;

	str = (char *)s;
	str_len = ft_strlen(str);
	if (!(returns = malloc(sizeof(char) * (str_len + 1))))
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		returns[i] = (*f)(i, s[i]);
		i++;
	}
	returns[i] = '\0';
	return (returns);
}
