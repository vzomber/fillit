/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:00:54 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/23 14:10:12 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (j < len)
	{
		dst[j] = '\0';
		j++;
	}
	return (dst);
}
