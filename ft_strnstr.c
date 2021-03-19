/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:35:07 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/02 15:09:28 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*a;
	char	*b;

	i = 0;
	j = 0;
	a = (char *)big;
	b = (char *)little;
	while (i < len && a[i])
	{
		while (b[j] && (a[i + j] == b[j]) && i + j < len)
			j++;
		if (j == ft_strlen(b))
			return (&a[i]);
		else if (b[j] != a[i + j])
			j = 0;
		i++;
	}
	return (NULL);
}
