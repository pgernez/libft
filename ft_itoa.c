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

static char	ft_putc(char c)
{
	ft_putchar((char)c);
	ft_putchar('\n');
	return (0);
}

char	*ft_itoa(int n)
{
	char	*fresh;
	int		n_copy;
	int		c;
	size_t	d;

	d = 0;
	n_copy = n;
	// if (n_copy < 0)
	// {
	// 	n_copy = - n_copy;
	// 	ft_putchar('-');
	// }
	while (n_copy != 0)
	{
		n_copy = n_copy / 10;
		d++;
	}
	if (!(fresh = (char*)malloc(sizeof(char) * (d + 2))))
		return (0);
	printf("n vaut %d\n", n);
	while (n != 0)
	{
		c = n % 10;
		n = n / 10;
		printf("c vaut : %d\n", c);
		d = ft_putc(c + 48);
		fresh[d++] = ;
		printf("fresh vaut : %s\n", fresh);
	}
	fresh[d] = 0;
	return (fresh);
}
