/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:02:59 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:48 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	while (s[i])
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	return (tmp);
}
