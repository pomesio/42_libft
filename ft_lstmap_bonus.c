/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:40:52 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/06 21:42:56 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	newlist = NULL;
	while (lst)
	{
		//pointer to newnode of the newlist
		newnode = ft_lstnew(f(lst->content));
		//if memory fails return NULL
		if (!newnode)
		{
			//list created, must clear the newlst
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		newlist->next = newlist;
	}
	return (newlist);
}
