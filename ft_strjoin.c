/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:03:36 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:42 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		tmp[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		tmp[i + j] = s2[j];
		j++;
	}
	return (tmp);
}
