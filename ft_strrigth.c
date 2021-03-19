/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrigth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:34:05 by adumitra          #+#    #+#             */
/*   Updated: 2017/12/02 15:39:07 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrigth(char *str, int n)
{
	char	*a;
	int		i;
	int		j;

	if (!str || n < 0)
		return (NULL);
	if (!(a = ft_strnew(n)))
		return (NULL);
	if ((i = ft_strlen(str) - n) < 0)
		i = 0;
	j = 0;
	while (j < n)
	{
		a[j] = str[i];
		i++;
		j++;
	}
	return (a);
}
