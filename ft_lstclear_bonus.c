/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:29:11 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/06 23:34:49 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptrwalker;

	while (*lst)
	{
		ptrwalker = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptrwalker;
	}
	free(*lst);
	*lst = NULL;
}
