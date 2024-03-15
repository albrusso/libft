/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:05:20 by albrusso          #+#    #+#             */
/*   Updated: 2024/03/15 19:55:17 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst)
	{
		tmp = lst;
		while (1)
		{
			if (!tmp->next)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
