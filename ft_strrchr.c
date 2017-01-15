/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 19:10:03 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/12 21:01:46 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != 0)
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*s_tmp;
	char	c_tmp;
	size_t	i;
	size_t	len;

	c_tmp = (char)c;
	s_tmp = (char*)s;
	len = ft_strlen(s);
	i = len - 1;
	while (s[i])
	{
		if (s_tmp[i] == c_tmp)
			return ((char*)&s[i]);
		else
			i--;
	}
	if (c_tmp == '\0')
		return ((char*)&s[i]);
	else
		return (0);
}