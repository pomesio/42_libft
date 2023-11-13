/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:07:07 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/09 21:42:45 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*cpy;
	size_t	mida;

	mida = ft_strlen(s1);
	cpy = malloc(mida + 1);
	if (!cpy)
		return (NULL);
	x = 0;
	while (x < mida)
	{
		cpy[x] = s1[x];
		x++;
	}
	cpy[x] = '\0';
	return (cpy);
}
