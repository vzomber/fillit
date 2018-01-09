/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 19:06:15 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/23 19:39:23 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len && *s1 && *s2 && *s1 == *s2)
	{
		len--;
		if (len == 0)
			return (0);
		s1++;
		s2++;
	}
	return (len == 0 ? 0 : (unsigned char)*s1 - (unsigned char)*s2);
}
