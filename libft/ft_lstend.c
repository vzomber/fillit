/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:24:11 by vzomber           #+#    #+#             */
/*   Updated: 2017/12/01 21:26:38 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	ft_lstend(t_list **alst, t_list *new)
{
	if (!new || !alst)
		return ;
	while ((*alst)->next)
		(*alst) = (*alst)->next;
	(*alst)->next = new;
	new->next = NULL;
}
