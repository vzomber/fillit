/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:30:12 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/23 19:31:17 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned char	*h;
	unsigned char	*n;
	unsigned char	*position;
	unsigned char	*t;

	h = (unsigned char *)haystack;
	n = (unsigned char *)needle;
	t = n;
	if (n[0] == '\0')
		return ((char*)h);
	while (*h)
	{
		if (*h == *n)
		{
			position = h;
			while (*n++ == *h++)
				if (*n == '\0')
					return ((char*)position);
			h = position + 1;
		}
		n = t;
		h++;
	}
	return (NULL);
}
