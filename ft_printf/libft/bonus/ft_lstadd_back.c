/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:29:10 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/29 22:10:31 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*last_elem;
	if (*alst == NULL)
	{
		*alst = new;
		new->next = 0;
	}
	else
	{
		last_elem = ft_lstlast(*alst);
		last_elem->next = new;
		new->next = 0;
	}
}
