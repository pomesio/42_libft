/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:43:08 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/09 21:43:11 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (d <= s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		d = dst + len - 1;
		s = (char *)src + len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	return (dst);
}
