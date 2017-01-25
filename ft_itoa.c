/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:05:57 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/21 17:06:31 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*fresh;
	char	d;

	d = 0;
	if (n < 0)
	{
		n = - n;
		ft_putchar('-');
	}
	while (n != '0')
	{
		n = n / 10;
		d++;
	}
	if (!(fresh = (char*)malloc(sizeof(char) * (d + 2))))
		return (0);
	while (n <= (d + 1))
		fresh[d++] = n;
	fresh[d] = 0;
	return (fresh);
}
