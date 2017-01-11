/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 18:16:50 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/11 22:20:45 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
		if (s_tmp[i] == c_tmp)
			return ((char*)&s[i]);
		else
			i++;
	}
	if (c_tmp == '\0')
		return ((char*)&s[i]);
	else
		return (0);
	return (0);
}
