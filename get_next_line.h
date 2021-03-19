/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumitra <adumitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 18:36:23 by adumitra          #+#    #+#             */
/*   Updated: 2017/06/23 14:28:12 by adumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10
# include "./libft.h"
# define VERIFICA(x) if (!x) return (-1);

typedef	struct	s_gnl
{
	char			*text;
	int				fd;
	struct s_gnl	*next;
}				t_gnl;

int				get_next_line(int const fd, char **line);
/* Citeste O LINIE dintr-un fisier pe care o salveaza in **line */
/* Returneaza: 1 daca citirea nu s-a terminat */
/*             0 daca a citit ultima linie */
/*             -1 in caz de eroare */

#endif
