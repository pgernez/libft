/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:53:54 by pgernez           #+#    #+#             */
/*   Updated: 2017/02/04 23:22:46 by pgernez          ###   ########.fr       */
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

/*int	main(int ac, char **av)
{
	char	*str;

	if (ac == 3)
	{
		str = ft_strjoin(av[1], av[2]);
		printf("s1 est %s\n", av[1]);
		printf("s2 est %s\n", av[2]);
		printf("la nouvelle string est %s\n", str);
	}
	return (0);
}*/

/*int	main(int ac, char **av)
{
	char	*str;

	if (ac == 2)
	{
		str = ft_strtrim(av[1]);
		printf("la nouvelle chaine est : %s\n", str);
	}
	return (0);
}*/

/*int	main(int ac, char **av)
{
	char	*str;

	if (ac)
		;
	{
		str = ft_itoa(0);
		printf("la chaine de caracteres donne : %s\n", str);
	}
	return (0);
}*/

int	main(int ac, char **av)
{
	char	**tab;
	size_t	w;

	w = 0;
	if (ac)
		;
	{
		tab = ft_strsplit(av[1], 'i');
		while (tab[w] != NULL)
		{
			printf("Resultat : |%s|\n", tab[w]);
			w++;
		}
	}
	return (0);
}
