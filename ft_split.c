/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:03:58 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:35 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_nbr_split(const char *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	len;

	i = 0;
	n = 0;
	len = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (len != 0)
				n++;
			len = 0;
		}
		else
			len++;
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (n);
}

void	ft_add_str(const char *s, char c, char **arr, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*tmp;

	i = 0;
	j = 0;
	len = 0;
	while (j < n)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (len != 0)
			{
				tmp = ft_substr(s, (unsigned int)(i - len), len);
				arr[j] = tmp;
				j++;
			}
			len = 0;
		}
		else
			len++;
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t	n;

	n = ft_nbr_split(s, c);
	arr = ft_calloc((n + 1), sizeof(char *));
	ft_add_str(s, c, arr, n);
	return (arr);
}