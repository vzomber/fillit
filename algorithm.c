/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 16:45:19 by vzomber           #+#    #+#             */
/*   Updated: 2018/01/06 16:45:52 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**neo_its_matrix(int column)
{
	int		i;
	int		j;
	char	**neo;

	i = 0;
	neo = (char **)malloc(sizeof(char *) * (column + 1));
	while (i < column)
	{
		neo[i] = (char *)malloc(sizeof(char) * (column + 1));
		i++;
	}
	i = 0;
	j = 0;
	while (i < column)
	{
		while (j < column)
			neo[i][j++] = '.';
		neo[i][j] = '\0';
		j = 0;
		i++;
	}
	neo[i] = NULL;
	return (neo);
}

int		space(t_coord *arr, char **map, int side)
{
	int k;
	int m;

	k = 0;
	m = 0;
	if (arr == NULL)
		return (0);
	while (k < 4)
	{
		if ((arr->j + arr->y[k]) < side && (arr->i + arr->x[k]) < side)
			m++;
		k++;
	}
	if (m < 4)
		return (0);
	k = 0;
	while (k < 4 && map[arr->j + arr->y[k]][arr->i + arr->x[k]] == '.')
		k++;
	return (k == 4 ? 1 : 0);
}

void	output(char **map, int side)
{
	int i;
	int j;

	j = 0;
	while (j < side)
	{
		i = 0;
		while (i < side)
		{
			ft_putchar(map[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	put(t_coord *arr, char **map, char from, int to)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (map[arr->j + arr->y[k]][arr->i + arr->x[k]] == from)
			map[arr->j + arr->y[k]][arr->i + arr->x[k]] = (char)to;
		k++;
	}
	if (k == 4)
		return ;
}

int		algo(t_coord *arr, char ***map, int side)
{
	arr->j = 0;
	while (arr->j < side)
	{
		arr->i = 0;
		while (arr->i < side)
		{
			if (space(arr, *map, side))
			{
				put(arr, *map, '.', arr->id);
				if (arr->next == NULL || algo(arr->next, map, side))
					return (1);
				else
					put(arr, *map, arr->id, '.');
			}
			arr->i++;
		}
		arr->j++;
	}
	return (0);
}
