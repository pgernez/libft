/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 18:16:50 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/11 21:23:12 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_tmp;
	size_t	i;
	char	*s_tmp;

	i = 0;
	c_tmp = (char)c;
	s_tmp = (char*)s;
	while (s[i])
	{
		if (s_tmp[i] != c_tmp)
			i++;
		else
			return ((char*)&s[i]);
	}
	return (0);
}
