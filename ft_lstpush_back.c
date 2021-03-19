/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 14:18:18 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/04 14:51:44 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush_back(t_list **begin, const void *data, size_t size)
{
	t_list	*a;

	a = NULL;
	if (!(*begin))
		*begin = ft_lstnew(data, size);
	else
	{
		a = *begin;
		while (a->next)
			a = a->next;
		a->next = ft_lstnew(data, size);
	}
}
