/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 23:02:20 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/18 23:19:19 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trim;
	char	start;

	i = 0;
	j = 0;
	k = (ft_strlen(s) - 1);
	if (s[j] == 0)
		return ((char*)s);
	if (!(trim = (char*)malloc(sizeof(size_t) * ft_strlen(s))))
		return (NULL);
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j++;
	start = j;
	while (s[k] == ' ' || s[k] == '\n' || s[k] == '\t')
		k--;
	while (i <= (k - start))
		trim[i++] = s[j++];
	trim[i] = 0;
	return (trim);
}
