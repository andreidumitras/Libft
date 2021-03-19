/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:30:30 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/04 11:51:53 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
	{
		while (n-- && (*s1 || *s2))
		{
			if ((unsigned char)*s1 == (unsigned char)*s2)
			{
				s1++;
				s2++;
			}
			else
				return ((unsigned char)*s1 - (unsigned char)*s2);
		}
	}
	return (0);
}
