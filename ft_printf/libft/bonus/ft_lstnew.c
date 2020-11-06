/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:17:27 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/12 07:24:30 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*elem;

	if (!(elem = malloc(sizeof(t_list) * (1))))
		return (0);
	elem->content = content;
	elem->next = 0;
	return (elem);
}
