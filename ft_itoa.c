/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 16:37:02 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/04 14:39:31 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	cate(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n > 0)
	{
		while (n)
		{
			n /= 10;
			i++;
		}
	}
	if (n < 0)
	{
		while (n != 0)
		{
			n /= 10;
			i++;
		}
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*a;
	size_t	i;
	int		ok;

	i = 0;
	ok = 1;
	if (n < 0)
		ok = -1;
	if (!(a = ft_strnew(cate(n))))
		return (NULL);
	if (n == 0)
		a[i++] = '0';
	while (n != 0)
	{
		a[i++] = (n % 10) * ok + '0';
		n /= 10;
	}
	if (ok == -1)
		a[i++] = '-';
	a[i] = '\0';
	return (ft_strrev(a));
}
