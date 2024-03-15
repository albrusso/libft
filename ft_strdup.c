/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:03:46 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:38 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char		*tmp;
	size_t		len;

	len = ft_strlen(s1) + 1;
	tmp = (char *)malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	return ((char *)ft_memcpy(tmp, s1, len));
}
