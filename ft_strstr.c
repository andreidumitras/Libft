/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:38:53 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/01 17:57:42 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*a;
	char	*b;

	a = (char *)haystack;
	b = (char *)needle;
	i = 0;
	j = 0;
	if (ft_strlen(a) == 0 && ft_strlen(b) == 0)
		return (a);
	while (a[i])
	{
		while (b[j] && a[i + j] == b[j])
			j++;
		if (!b[j])
			return (&a[i]);
		else if (a[i + j] != b[j])
			j = 0;
		i++;
	}
	return (NULL);
}
