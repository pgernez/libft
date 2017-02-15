/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 19:10:03 by pgernez           #+#    #+#             */
/*   Updated: 2017/02/15 19:47:19 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != 0)
		len++;
	return (len);
}

char			*ft_strrchr(const char *s, int c)
{
	char	*s_tmp;
	char	c_tmp;
	size_t	i;
	size_t	len;

	c_tmp = (char)c;
	s_tmp = (char*)s;
	len = ft_slen(s);
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
