/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 17:11:31 by adumitra          #+#    #+#             */
/*   Updated: 2017/06/21 17:12:18 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strjump(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (i);
}
