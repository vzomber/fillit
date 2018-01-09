/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_coords.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 16:47:09 by vzomber           #+#    #+#             */
/*   Updated: 2018/01/09 16:06:58 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_coord	*fill_arr_xy(int *coord_x, int *coord_y)
{
	t_coord *arr;

	if (g_head_arr == NULL)
	{
		g_head_arr = (t_coord *)malloc(sizeof(t_coord));
		g_head_arr->next = NULL;
		g_head_arr->id = g_diez++;
		g_head_arr->x = parse_coords_x(coord_x);
		g_head_arr->y = parse_coords_y(coord_y);
		return (g_head_arr);
	}
	arr = g_head_arr;
	while (arr->next)
	{
		arr = arr->next;
	}
	arr->next = (t_coord *)malloc(sizeof(t_coord));
	arr = arr->next;
	arr->id = g_diez++;
	arr->x = parse_coords_x(coord_x);
	arr->y = parse_coords_y(coord_y);
	arr->next = NULL;
	return (arr);
}

int		*parse_coords_x(int *coord_x)
{
	int i;
	int min_x;

	i = 0;
	min_x = coord_x[0];
	while (i < 4)
	{
		if (coord_x[i] < min_x)
			min_x = coord_x[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		coord_x[i] = coord_x[i] - min_x;
		i++;
	}
	return (coord_x);
}

int		*parse_coords_y(int *coord_y)
{
	int i;
	int min_y;

	i = 0;
	min_y = coord_y[0];
	while (i < 4)
	{
		if (coord_y[i] < min_y)
			min_y = coord_y[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		coord_y[i] = coord_y[i] - min_y;
		i++;
	}
	return (coord_y);
}
