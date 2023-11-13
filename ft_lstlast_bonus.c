/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:27:34 by jade-car          #+#    #+#             */
/*   Updated: 2023/11/06 22:14:27 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*route;

	if (lst == NULL)
		return (NULL);
	route = lst;
	while (route->next != NULL)
		route = route->next;
	return (route);
}
