/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 18:28:19 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/06 22:55:27 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[j])
		j++;
	while (s2[i] && i < n)
	{
		s1[i + j] = s2[i];
		i++;
	}
	s1[i + j] = 0;
	return (s1);
}
