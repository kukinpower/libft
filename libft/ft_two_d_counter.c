/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_d_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkristie <kukinpower@ya.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 01:51:00 by mkristie          #+#    #+#             */
/*   Updated: 2020/07/08 01:51:05 by mkristie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	two_d_counter(char ***s)
{
	size_t	i;

	i = 0;
	while ((*s)[i])
	{
		i++;
	}
	return (i);
}
