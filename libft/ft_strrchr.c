/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:13:39 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/23 15:42:34 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	p = NULL;
	if ((unsigned char)c == '\0')
		return (p = (char*)&s[len]);
	while (s[i])
	{
		if (s[i] == (char)c)
			p = (char*)&s[i];
		i++;
	}
	if (p != NULL)
		return (p);
	return (NULL);
}
