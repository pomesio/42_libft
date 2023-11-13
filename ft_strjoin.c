/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:06:27 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/09 21:42:35 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		k;
	int		i;

	join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (!join)
		return (NULL);
	k = 0;
	i = 0;
	while (s1[i])
		join[k++] = s1[i++];
	i = 0;
	while (s2[i])
		join[k++] = s2[i++];
	join[k] = '\0';
	return (join);
}
