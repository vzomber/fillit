/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:33:07 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/30 18:12:49 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterate through list and apply del function on each element
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (!alst || !del)
		return ;
	while ((*alst) && (*alst)->next != NULL)
	{
		tmp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		(*alst) = tmp;
	}
	ft_lstdelone(alst, del);
}
