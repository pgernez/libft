/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 15:05:47 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/06 22:52:34 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;
	int		i;

	zone = (void*)malloc(sizeof(size_t) * size);
	{
		if (zone == 0)
			return (NULL);
	}
	i = 0;
	return (zone);
}

int		main(int i, char **argv)
{
	void	*zone;
	size_t	size;

	i = 12;
	size = 12;
	zone = ft_memalloc(size);
	printf("size : %zu\nzone : %p\n", size, zone);
	return (0);
}
