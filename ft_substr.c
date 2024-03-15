/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:01:59 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:55 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(s);
	tmp = ft_calloc(len + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	while (i < len && i + start < n)
	{
		tmp[i] = s[start + i];
		i++;
	}
	return (tmp);
}
