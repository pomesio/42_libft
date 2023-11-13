/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:44:05 by jade-car          #+#    #+#             */
/*   Updated: 2023/10/01 23:07:04 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_tostr(char *s, long n, long len)
{
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	if (n == 0)
		s[0] = '0';
	while (n)
	{
		s[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (s);
}

static long	ft_lendigit(long num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len = 1;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = ft_lendigit(n);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	res = ft_tostr(res, n, len);
	return (res);
}
