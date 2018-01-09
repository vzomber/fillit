/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 19:23:18 by vzomber           #+#    #+#             */
/*   Updated: 2018/01/06 16:46:56 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_counter(t_coord *arr)
{
	int i;

	while (arr != NULL)
	{
		i = 0;
		while (i < 4)
		{
			if (arr->x[i] >= g_max_x)
				g_max_x = arr->x[i];
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (arr->y[i] >= g_max_y)
				g_max_y = arr->y[i];
			i++;
		}
		arr = arr->next;
	}
	g_max_x++;
	g_max_y++;
	return (g_max_x >= g_max_y ? g_max_x : g_max_y);
}
