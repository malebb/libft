/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matthieul <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 08:20:57 by matthieu          #+#    #+#             */
/*   Updated: 2020/09/30 21:21:36 by matthieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*begin_new_list;
	t_list			*new_elem;
	unsigned int	count;
	(void)del;

	count = 0;
	while (lst)
	{
		if (count == 0)
		{
			begin_new_list = ft_lstnew((*f)(lst->content));
		}
		else
		{
			new_elem = ft_lstnew((*f)(lst->content));
			ft_lstadd_back(&begin_new_list, new_elem);
		}
		count++;
		lst = lst->next;
	}
	return (begin_new_list);
}

