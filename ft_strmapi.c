/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 19:21:29 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/15 19:28:24 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh;
	size_t	i;

	fresh = (char*)malloc(sizeof(char) * s);
	{
		if (fresh == 0)
			return (NULL);
	}
	while (fresh[i])
	{
		(*f)((unsigned int)i, fresh[i]);
		i++;
	}
	return (fresh);
}
