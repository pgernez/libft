/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:05:57 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/29 23:32:40 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*fresh;
	unsigned int	n_copy;
	int				c;
	int				neg;
	size_t			d;

	neg = 0;
	d = 1;
	if (n < 0)
		neg = -1;
	if (neg == -1)
		d = 2;
	n_copy = (neg == -1) ? -(n / 10) : n / 10; // je regarde que les chiffres avant le chiffre des unites (qui existe tout le temps)
	while (n_copy != 0)
	{
		n_copy = n_copy / 10;
		d++;
	}
	if (!(fresh = (char*)malloc(sizeof(char) * (d + 1))))
		return (0);
	n_copy = (neg == -1) ? -n : n;
	fresh[d] = 0;
	while (d + neg != 0)
	{
		d = d - 1;
		c = n_copy % 10;
		n_copy = n_copy / 10;
		fresh[d] = c + 48;
	}
	if (neg == -1)
		fresh[0] = '-';
	return (fresh);
}
