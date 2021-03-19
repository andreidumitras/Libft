/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 16:57:38 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/02 16:51:40 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	char			*s;
	char			*a;
	size_t			i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	a = (char *)malloc(n);
	if (a)
	{
		while (i < n)
		{
			a[i] = s[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			d[i] = a[i];
			i++;
		}
		free(a);
	}
	return (d);
}
