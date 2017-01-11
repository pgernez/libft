/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 22:43:50 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/07 23:02:48 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*tmps1;
	char	*tmps2;

	n = 0;
	tmps1 = (char*)s1;
	tmps2 = (char*)s2;
	while (tmps1[n] != 0 && tmps2[n] != 0)
	{
		if (tmps1[n] == tmps2[n])
			n++;
		else
			break ;
	}
	return ((int)(tmps1[n] - tmps2[n]));
}
