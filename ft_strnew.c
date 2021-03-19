/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:34:07 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/01 17:36:55 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*a;

	a = (char *)malloc(size + 1);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, size + 1);
	return (a);
}
