/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 21:23:36 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/15 21:58:41 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;

	fresh = (char*)malloc(sizeof(char) * (len - start));
	{
		if (fresh == 0)
			return (NULL);
	}
	while (fresh[start])
		start++;
	return (fresh);
}
