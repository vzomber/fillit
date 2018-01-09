/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 17:06:06 by vzomber           #+#    #+#             */
/*   Updated: 2018/01/06 17:07:57 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 22

static	char			g_diez = 'A';
static	int				g_max_x = 0;
static	int				g_max_y = 0;

typedef	struct			s_t_min_xy
{
	int					x;
	int					y;
	struct s_t_min_xy	*next;
}						t_flist;

typedef	struct			s_t_coord_xy
{
	int					*x;
	int					*y;
	char				id;
	int					i;
	int					j;
	struct s_t_coord_xy	*next;
}						t_coord;

t_coord					*g_head_arr;
t_flist					*g_head__xy_min;

void					output(char **map, int side);
int						*parse_coords_y(int *coord_y);
int						*parse_coords_x(int *coord_x);
t_coord					*fill_arr_xy(int *coord_parsed_x, int *coord_parsed_y);
int						ft_counter(t_coord *arr);
int						ft_audit(char *s);
int						algo(t_coord *arr, char ***map, int side);
int						space(t_coord *arr, char **map, int side);
void					put(t_coord *arr, char **map, char from, int to);
int						*coordinate_y(char *s);
int						*coordinate_x(char *s);
char					**neo_its_matrix(int column);
#endif
