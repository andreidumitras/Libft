/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjump_alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 12:33:05 by adumitra          #+#    #+#             */
/*   Updated: 2017/12/01 12:33:07 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strjump_alpha(char *s, char caz)
{
	int	i;

	if (!s || (caz != 'a' && caz != 'l' && caz != 'u'))
		return (-1);
	i = 0;
	if (caz == 'a')
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			i++;
	if (caz == 'l')
		while (s[i] >= 'a' && s[i] <= 'z')
			i++;
	if (caz == 'u')
		while (s[i] >= 'A' && s[i] <= 'Z')
			i++;
	return (i);
}
