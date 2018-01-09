/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 16:46:04 by vzomber           #+#    #+#             */
/*   Updated: 2018/01/09 16:09:05 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_coord *g_head_arr = NULL;

int		ft_main_helper(int fd)
{
	int		nbr;
	char	buf[BUF_SIZE];
	int		p;

	nbr = 0;
	while ((p = read(fd, buf, 21)))
	{
		buf[p] = '\0';
		nbr++;
		if (!(ft_audit(buf)) || nbr > 26)
		{
			ft_putstr("error\n");
			return (0);
		}
		fill_arr_xy(coordinate_x(buf), coordinate_y(buf));
	}
	if ((read(fd, buf, 1)) || (buf[20] == '\n' && buf[19] == '\n') || nbr <= 0)
	{
		ft_putendl("error");
		return (0);
	}
	return (1);
}

void	ft_main_helper_2(void)
{
	int		x;
	char	**map;
	int		res;

	x = ft_counter(g_head_arr);
	map = neo_its_matrix(x);
	res = algo(g_head_arr, &map, x);
	while (!res)
	{
		free(*map);
		x++;
		map = neo_its_matrix(x);
		res = algo(g_head_arr, &map, x);
	}
	output(map, x);
}

int		main(int ac, char **av)
{
	int		fd;

	fd = 0;
	if ((fd = open(av[1], O_RDONLY)) == -1)
		return (0);
	if (ac != 2)
		ft_putstr("usage: ./fillit source_file\n");
	else
	{
		if (!ft_main_helper(fd))
			return (0);
		else
			ft_main_helper_2();
		close(fd);
	}
	return (0);
}
