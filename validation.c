/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 19:04:21 by vzomber           #+#    #+#             */
/*   Updated: 2018/01/06 16:47:24 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sharps(char *s)
{
	int sharps;
	int neighbor;
	int i;

	neighbor = 0;
	sharps = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '#')
		{
			sharps++;
			if (i < 20 && s[i + 1] == '#')
				neighbor++;
			if (i > 0 && s[i - 1] == '#')
				neighbor++;
			if (i >= 5 && s[i - 5] == '#')
				neighbor++;
			if (i < 15 && s[i + 5] == '#')
				neighbor++;
		}
		i++;
	}
	return (sharps == 4 && ((neighbor == 6) || (neighbor == 8)) ? 1 : 0);
}

int		ft_points(char *s)
{
	int i;
	int points;

	points = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '.')
			points++;
		i++;
	}
	return (points == 12 ? 1 : 0);
}

int		ft_nl(char *s)
{
	if (s[4] == '\n' && s[9] == '\n' && s[14] == '\n' && s[19] == '\n')
		return (1);
	return (0);
}

int		ft_audit(char *s)
{
	int i;

	i = 0;
	if (ft_sharps(s))
		i++;
	if (ft_points(s))
		i++;
	if (ft_nl(s))
		i++;
	return (i == 3 ? 1 : 0);
}
