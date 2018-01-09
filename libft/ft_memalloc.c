/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:43:03 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/30 18:16:59 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;
	size_t	i;

	s = malloc(size);
	if (s == NULL || !size)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
