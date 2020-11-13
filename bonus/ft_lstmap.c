/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:44:43 by mlebrun           #+#    #+#             */
/*   Updated: 2020/11/13 10:44:44 by mlebrun          ###   ########.fr       */
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

