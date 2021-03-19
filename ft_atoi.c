/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:21:17 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/13 17:21:18 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	n;
	int		da;

	if (! str)
		return (-1);
	n = 0;
	da = 1;
	while (ft_isblank(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			da = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (n * da > 2147483647)
			return (-1);
		if (n * da < -2147483648)
			return (0);
		n = n * 10 + *str - '0';
		str++;
	}
	return (n * da);
}
