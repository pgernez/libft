/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 23:23:14 by pgernez           #+#    #+#             */
/*   Updated: 2017/02/15 21:13:48 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((int)i != c && i <= (n - 1))
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	if ((int)i == c)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
		return (dst);
	}
	return (dst);
}
