/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:05:49 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:03 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nlen(long num)
{
	size_t	n;

	if (num <= 0)
		n = 1;
	else
		n = 0;
	while (num != 0)
	{
		num /= 10;
		n++;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nbr;
	char	*s;

	len = ft_nlen(n);
	nbr = n;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
	}
	s[len] = '\0';
	while (1)
	{
		s[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
		if (nbr == 0)
			break ;
	}
	return (s);
}
