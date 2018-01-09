/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:27:42 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/23 15:40:01 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*k;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		if ((unsigned char)c == '\0')
			return (k = (char*)&s[len]);
		if (s[i] == (unsigned char)c)
			return (k = (char*)&s[i]);
		i++;
	}
	return (NULL);
}
