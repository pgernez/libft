/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:53:54 by pgernez           #+#    #+#             */
/*   Updated: 2017/01/14 23:25:35 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

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
//int	main(int ac, char **av)
//{
//	char	*str;
//	char	*str2;
//
//	if (ac == 3)
//	{
//		str = (char*)strchr(av[1], '\0');
//		str2 = (char*)ft_strchr(av[2], '\0');
//		printf("ptr est %p\n", str);
//		printf("ptr2 est %p\n", str2);
//		printf("str est %s\n", str);
//		printf("str2 est %s\n", str2);
//	}
//	return (0);
//}

//int	main(int ac, char **av)
//{
//	char	*str;
//	char	*str2;

//	if (ac == 3)
//	{
//		str = (char*)strrchr(av[1], '\0');
//		str2 = (char*)ft_strrchr(av[2], '\0');
//		printf("ptr est %p\n", str);
//		printf("ptr2 est %p\n", str2);
//		printf("str est %s\n", str);
//		printf("str2 est %s\n", str2);
//	}
//	return (0);
//}

/*int	main(int ac, char **av)
{
	char	*str;
	char	*str2;

	if (ac == 3)
	{
		str = (char*)strstr(av[1], "co");
		str2 = (char*)ft_strstr(av[2], "co");
		printf("la nouvelle string est %s\n", str);
		printf("la nouvelle string est %s\n", str2);
	}
	return (0);
}
*/
/*int	main(int ac, char **av)
{
	char	*str;
	char	*str2;

	if (ac == 3)
	{
		str = (char*)strnstr(av[1], "ricot", 6);
		str2 = (char*)ft_strnstr(av[2], "ricot", 6);
		printf("la string est %s\n", str);
		printf("la string est %s\n", str2);
	}
	return (0);
}*/

/*int		main(int i, char **argv)
{
	void	*zone;
	size_t	size;

	i = 12;
	size = 12;
	zone = ft_memalloc(size);
	printf("size : %zu\nzone : %p\n", size, zone);
	return (0);
}*/

/*void	ft_putbis(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}*/

/*void	ft_putter(char *s)
{
	ft_putstr((const char*)s);
}

int	main(int ac, char **av)
{
	void	(*f)(char*);

	f = &ft_putter;
	if (ac == 2)
	{
		ft_striter(av[1], f);
	}
	return (0);
}*/
