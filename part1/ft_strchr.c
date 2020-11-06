/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:03:12 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/09 19:45:26 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str_found;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str_found = (char *)s;
			return (&str_found[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		str_found = (char *)s;
		return (&str_found[i]);
	}
	return (0);
}
