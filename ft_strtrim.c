/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:41:20 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/04 11:51:29 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*a;

	if (s)
	{
		i = 0;
		k = 0;
		j = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (!s[i])
			return ("");
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		if (!(a = ft_strnew(j - i + 1)))
			return (NULL);
		while (i <= j)
			a[k++] = s[i++];
		a[k] = '\0';
		return (a);
	}
	return (NULL);
}
