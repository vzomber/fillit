/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <vzomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 22:21:52 by vzomber           #+#    #+#             */
/*   Updated: 2018/01/09 16:02:04 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*coordinate_x(char *s)
{
	int i;
	int j;
	int *x;

	i = 0;
	j = 0;
	if (!(x = (int *)malloc(sizeof(int) * 4 + 1)))
		return (NULL);
	while (*s)
	{
		if (*s == '#')
		{
			x[j] = i;
			j++;
		}
		if (*s == '\n')
			i = -1;
		i++;
		s++;
	}
	return (x);
}

int		*coordinate_y(char *s)
{
	int i;
	int j;
	int *y;

	i = 0;
	j = 0;
	if (!(y = (int *)malloc(sizeof(int) * 4 + 1)))
		return (NULL);
	while (i < 4)
		y[i++] = 0;
	i = 0;
	while (*s)
	{
		if (*s == '#')
		{
			y[j] = i;
			j++;
		}
		if (*s == '\n')
			i++;
		s++;
	}
	return (y);
}
