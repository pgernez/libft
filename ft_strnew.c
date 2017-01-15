/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 18:01:56 by pgernez           #+#    #+#             */
/*   Updated: 2016/12/30 19:42:57 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	i;

	i = 0;
	newstr = (char*)malloc(sizeof(size_t) * (size + 1));
	{
		if (newstr == 0)
			return (NULL);
	}
	while (newstr[i])
	{
		i = 0;
		i++;
	}
	return (newstr);
}
