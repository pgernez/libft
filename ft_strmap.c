/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 18:55:34 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/15 19:20:43 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		(*f)(fresh[i]);
		i++;
	}
	return (fresh);
}
