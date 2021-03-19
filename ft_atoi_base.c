/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:29:23 by adumitra          #+#    #+#             */
/*   Updated: 2017/08/22 16:04:29 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		get_power(char *str)
{
	int		p;

	p = -1;
	while ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'Z'))
	{
		p++;
		str++;
	}
	return (p);
}

static	int		get_number(char l)
{
	int		n;

	if (l >= 'A' && l <= 'Z')
		n = l - 'A' + 10;
	else
		n = l - '0';
	return (n);
}

static	int		power(int n, int p)
{
	long	r;

	r = 1;
	while (p--)
		r *= n;
	return (r);
}

int				ft_atoi_base(char *str, int base)
{
	long	r;
	int		ok;
	int		p;

	if (base < 2 || base > 35 || !str)
		return (-1);
	r = 0;
	ok = 1;
	str += ft_strjump_blank(str);
	if ((*str == '-' || *str == '+') && base == 10)
	{
		if (*str == '-')
			ok = -1;
		str++;
	}
	if ((p = get_power(str)) == -1)
		return (0);
	while ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'Z'))
	{
		r += get_number(*str) * power(base, p);
		str++;
		p--;
	}
	return (r * ok);
}
