/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:48:24 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/09 21:41:09 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	supersize;
	void	*ptr;

	supersize = nitems * size;
	ptr = malloc(supersize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, supersize);
	return (ptr);
}
