/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 07:45:23 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/30 00:55:17 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*previous_elem;

	previous_elem = *lst;
	while ((*lst) != 0)
	{
		previous_elem = *lst;
		(*del)((*lst)->content);
		(*lst) = (*lst)->next;
		free(previous_elem);
	}
	(*lst) = 0;
}
