/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 23:04:59 by pgernez           #+#    #+#             */
/*   Updated: 2017/02/06 23:34:09 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct		s_data
{
	char			c;
	int				nbr;
	char			*word;
	struct s_data	*next;
}					t_data;


int	main(void)
{
	t_data		carre;
	t_data		*ptr;
	t_data		**aptr;

	ptr = &carre;
	aptr = &ptr;
	// Ecrire 42 dns l'entier de carre et ecrire Bonjour aussi dans carre.
	carre.nbr = 42;
	carre.word = "Bonjour";
	printf("L'entier est : %d\n", (**aptr).nbr);
	printf("On dit : %s\n", (**aptr).word);
	return (0);
}
