/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:17:03 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/09 21:40:57 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			strsymb;
	long int	numdec;

	strsymb = 1;
	numdec = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			strsymb *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		numdec *= 10;
		numdec += *str - 48;
		str++;
	}
	return (numdec * strsymb);
}
