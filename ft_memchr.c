/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 22:39:44 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/10 22:26:06 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_tmp;
	size_t	i;
	unsigned char	c_tmp;

	s_tmp = (char*)s;
	c_tmp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_tmp[i] != c_tmp)
			i++;
		else
			return ((void*)&s[i]);
	}
	return (0);
}
