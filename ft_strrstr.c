/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:26:05 by adumitra          #+#    #+#             */
/*   Updated: 2017/12/08 22:02:04 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*rstr(char *a, char *b, int n, int m)
{
	int		i;
	int		j;

	i = n;
	j = m;
	while (i >= 0)
	{
		while (i >= 0 && j >= 0 && a[i] == b[j])
		{
			i--;
			j--;
		}
		if (!++j)
			return (a + ++i);
		else
		{
			j = m;
			i--;
		}
	}
	return (NULL);
}

char			*ft_strrstr(const char *big, const char *little)
{
	int		n;
	int		m;
	char	*a;
	char	*b;

	if (!big || !little)
		return (NULL);
	n = (int)ft_strlen(big) - 1;
	m = (int)ft_strlen(little) - 1;
	a = (char *)big;
	b = (char *)little;
	if (n < 0 && m >= 0)
		return (NULL);
	else if ((n < 0 && m < 0) || (m < 0 && n >= 0))
		return ("");
	return (rstr(a, b, n, m));
}
