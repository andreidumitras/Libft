/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:19:05 by adumitra          #+#    #+#             */
/*   Updated: 2017/12/01 12:19:07 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strswap(char **s1, char **s2)
{
	char	*aux;

	aux = *s1;
	*s1 = *s2;
	*s2 = aux;
}