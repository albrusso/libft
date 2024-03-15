/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:20:33 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:54:46 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convert(const char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			j = j * 10 + (s[i] - '0');
		else
			return (j);
		i++;
	}
	return (j);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (s[i] == ' ' ||
			(s[i] >= '\t' && s[i] <= '\r'))
		i++;
	if (s[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (s[i] == '+')
		i++;
	res = ft_convert(&s[i]);
	return (res * sign);
}
