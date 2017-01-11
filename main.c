/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:53:54 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/11 21:30:45 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);

//int	main(int ac, char **av)
//{
//	char	*ptr;
//	char	*ptr2;

//	if (ac == 3)
//	{
//		ptr = (char*)memchr(av[1], 'z', 12);
//		ptr2 = (char*)ft_memchr(av[2], 'z', 12);
//		printf("ptr est  %p\n", ptr);
//		printf("ptr2 est %p\n", ptr2);
//		printf("str est %s\n", ptr);
//		printf("str2 est %s\n", ptr2);
//	}
//	return (0);
//}
//
int	main(int ac, char **av)
{
	char	*str;
	char	*str2;
	
	if (ac == 3)
	{
		str = (char*)strchr(av[1], '\0');
		str2 = (char*)ft_strchr(av[2], '\0');
		printf("ptr est %p\n", str);
		printf("ptr2 est %p\n", str2);
		printf("str est %s\n", str);
		printf("str2 est %s\n", str2);
	}
	return (0);
}
