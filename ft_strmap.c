/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:27:55 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/04 11:48:08 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*a;

	if (s && f)
	{
		i = 0;
		if ((a = (char *)malloc(ft_strlen(s) + 1)))
		{
			while (s[i])
			{
				a[i] = f(s[i]);
				i++;
			}
			a[i] = '\0';
			return (a);
		}
	}
	return (NULL);
}
