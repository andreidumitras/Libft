/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 14:24:11 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/04 14:52:05 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush_front(t_list **begin, const void *data, size_t size)
{
	t_list	*a;

	a = NULL;
	if (!(*begin))
		*begin = ft_lstnew(data, size);
	else
	{
		a = *begin;
		a = ft_lstnew(data, size);
		a->next = *begin;
	}
	*begin = a;
}
