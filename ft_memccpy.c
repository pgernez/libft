/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 23:23:14 by pgernez           #+#    #+#             */
/*   Updated: 2017/02/19 23:51:10 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (((unsigned char*)src)[i] != (unsigned char)c && i < n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	if (((unsigned char*)src)[i] == (unsigned char)c)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
		return (&((char*)dst)[i]);
	}
	return (NULL);
}
