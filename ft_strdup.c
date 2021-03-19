/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:21:46 by adumitra          #+#    #+#             */
/*   Updated: 2017/02/01 17:37:28 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;

	a = ft_strnew(ft_strlen((char *)s));
	if (!a)
		return (NULL);
	ft_strcpy(a, (char *)s);
	return (a);
}
