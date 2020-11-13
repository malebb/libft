/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:42:38 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:42:39 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;
	char			*str;
	unsigned int	str_size;

	str_size = 0;
	str = (char *)s;
	while (str[str_size] != '\0')
		str_size++;
	if (!(sub_str = malloc(sizeof(char) * (len))))
		return (0);
	i = 0;
	if (start < str_size)
	{
		while (str[i] != '\0' && i < len)
		{
			sub_str[i] = str[start + i];
			i++;
		}
	}
	sub_str[i] = '\0';
	return (sub_str);
}
