/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 21:24:51 by adumitra          #+#    #+#             */
/*   Updated: 2017/05/14 22:49:04 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinch(char const *s, char c)
{
	char	*a;
	size_t	i;
	size_t	len;

	if (!s || !c)
		return (NULL);
	len = ft_strlen(s);
	if (!(a = ft_strnew(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i] = s[i];
		i++;
	}
	a[i] = c;
	return (a);
}
