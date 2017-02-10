/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgernez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 20:50:39 by pgernez           #+#    #+#             */
/*   Updated: 2017/02/10 22:33:59 by pgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	tmp = NULL;
	if (lst != NULL)
	{
		while (lst != NULL)
		{
			tmp = lst->next;
			(*f)(lst);
			lst = tmp;
		}
	}
}
