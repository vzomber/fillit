/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 19:32:53 by vzomber           #+#    #+#             */
/*   Updated: 2017/12/01 19:35:12 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordnum(const char *s, char c)
{
	int		state;
	size_t	cnt_words;

	if (!*s)
		return (0);
	cnt_words = 0;
	state = 0;
	while (*s)
	{
		if (*s == c)
			state = 0;
		else if (*s != c && state == 0)
		{
			state = 1;
			cnt_words++;
		}
		s++;
	}
	return (cnt_words);
}
