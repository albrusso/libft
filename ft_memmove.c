/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:15:36 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:26 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*csrc;
	char		*cdest;
	size_t		i;

	i = 0;
	csrc = (const char *) src;
	cdest = (char *) dest;
	if (cdest > csrc)
	{
		while (i < len)
		{
			cdest[len - i - 1] = csrc[len - i - 1];
			i++;
		}
	}
	else
		ft_memcpy (cdest, csrc, len);
	return (cdest);
}
