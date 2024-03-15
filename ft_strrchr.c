/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:02:38 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:54 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	i = ft_strlen(str);
	while (i > 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
	{
		s = (char *)(str + i);
		return (s);
	}
	else
		return (NULL);
}
