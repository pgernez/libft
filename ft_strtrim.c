/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 23:02:20 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/15 23:41:09 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*trim;

	i = 0;
	j = 0;
	trim = (char*)malloc(sizeof(size_t) * ft_strlen(s));
	{
		if (trim == 0)
			return (NULL);
	}
	if (s[j] != ' ' && s[j] != '\t' && s[j] != '\n')
		trim[i++] = s[j++];
	else
		j++;
	if (s[j++] != ' ' && s[j++] != '\n' && s[j++] != '\t')
		return ((char*)s);
	else
		return (trim);
}
