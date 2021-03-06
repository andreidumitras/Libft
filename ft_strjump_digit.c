/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjump_digit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 12:56:05 by adumitra          #+#    #+#             */
/*   Updated: 2017/12/01 12:56:07 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strjump_digit(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}
