/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 19:00:51 by pgernez           #+#    #+#             */
/*   Updated: 2017/02/13 23:31:21 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (i <= (len - 1))
	{
		tmp[i] = ((char*)src)[i];
		((char*)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}
