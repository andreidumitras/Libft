/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrigth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:48:05 by adumitra          #+#    #+#             */
/*   Updated: 2017/12/02 15:50:07 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strleft(char *str, int n)
{
	char	*a;
	int		i;

	if (n < 0 || !str)
		return (NULL);
	if (!(a = ft_strnew(n)))
		return (NULL);
	i = 0;
	while (i < n && str[i])
	{
		a[i] = str[i];
		i++;
	}
	return (a);
}
