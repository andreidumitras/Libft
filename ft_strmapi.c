/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:28:43 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/04 11:49:55 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*a;
	char			*b;

	b = (char *)s;
	if (b && f)
	{
		i = 0;
		if ((a = (char *)malloc(ft_strlen(b) + 1)))
		{
			while (b[i])
			{
				a[i] = f(i, b[i]);
				i++;
			}
			a[i] = '\0';
			return (a);
		}
	}
	return (NULL);
}
