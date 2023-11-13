/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:38:30 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/09 21:42:39 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	k;
	size_t	slen;

	if (s != NULL && f != NULL)
	{
		k = 0;
		slen = ft_strlen(s);
		while (k < slen)
		{
			(*f)(k, s);
			k++;
			s++;
		}
	}
}
