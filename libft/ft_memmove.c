/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:07:00 by vzomber           #+#    #+#             */
/*   Updated: 2017/12/01 19:29:48 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char*)dst;
	s = (char*)src;
	i = -1;
	if (s < d)
		return (ft_memcpy(d, s, len));
	if (s > d)
	{
		while (++i < len)
			d[i] = s[i];
		return (d);
	}
	return (s);
}
